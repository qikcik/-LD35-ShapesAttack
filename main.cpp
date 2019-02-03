#include <SFML/Graphics.hpp>
#include "Game.h"


void start(sf::RenderWindow & window)
{
    sf::Texture Tstart;
    sf::Sprite start;

    Tstart.loadFromFile("start.png");
    start.setTexture(Tstart);

    bool exit = true;
    while(exit)
    {
        sf::Event zdarzenie;
        while( window.pollEvent( zdarzenie ) )
        {
            if( zdarzenie.type == sf::Event::Closed ) {window.close(); exit = false; }
            if( zdarzenie.type == sf::Event::KeyPressed ) exit = false;
        }


        window.clear();
        window.draw(start);
        window.display();
    }

}

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow okno (sf::VideoMode(1024, 768), "Shapes Attack", sf::Style::Close, settings);

    start(okno);

    Game gra;
    gra.render(okno);


    return 0;
}
