#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.h"

void Game::render(sf::RenderWindow &window)
{
    VECshape.push_back( Cshape() );

    window.setFramerateLimit(60);
    srand( time( NULL ) );

    sf::Clock zegar;
    sf::Time CzasOdAktualizacji = sf::Time::Zero;
    const sf::Time KrokCzasowy = sf::seconds(1.f/60.f);

    init();
    //////////////////////////////////////////////////////////////////////////////////////

    while(window.isOpen())
    {

        sf::Time Czas = zegar.restart();
        CzasOdAktualizacji += Czas;


        while(CzasOdAktualizacji > KrokCzasowy)
        {
            CzasOdAktualizacji -= KrokCzasowy;
            events(window);
            if (rules.run == true)
            updateLogic(KrokCzasowy);
        }



        window.clear();

        if (rules.run == true)
        draw(window);
        else gui.drawGameOver(window);

        window.display();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////

void Game::events(sf::RenderWindow &window)
{
    while(window.pollEvent(zdarzenie))
    {
        if( zdarzenie.type == sf::Event::Closed )
                     window.close();

        if( sf::Keyboard::isKeyPressed( sf::Keyboard::Space )  && rules.run == false ) { init();}

    }
}

void Game::updateLogic(sf::Time czas)
{
    rules.shapeControler(VECshape);

    for( int i = 0; i < VECshape.size(); i++)
    {
       VECshape[i].Update(czas);
    }

    gracz.Update();
    gui.update( rules.life , rules.score );
    rules.checkColision(VECshape , gracz ,sound);
    restart();

}

void Game::draw(sf::RenderWindow &window)
{
    for( int i = 0; i < VECshape.size(); i++)
    {
       VECshape[i].draw(window);
    }

    gracz.draw(window);
    gui.draw(window);
}

void Game::init()
{
    gracz.Init();
    gui.Init();
    rules.Innit();
    sound.init();
    VECshape.clear();

    VECshape.push_back( Cshape() );
    VECshape[VECshape.size() -1 ].Init( rules.speed , false);
}

void Game::restart()
{
    if(rules.gameover(gui , zdarzenie  ))
        {init();}
}

