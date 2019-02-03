#include "Gui.h"
#include <iostream>
#include <string>
#include <sstream>




void Gui::Init()
{
    font.loadFromFile("FFFFORWA.ttf");
    Tscore.setFont(font);
    Tscore.setCharacterSize(24);
    Tscore.setColor(sf::Color::Black);

    Tscore.setPosition(sf::Vector2f(70,15));

    tGui.loadFromFile("ramka.png");
    Gui.setTexture(tGui);

    tLifeBar.loadFromFile("life.png");
    tLifeBar.setRepeated(true);
    LifeBar.setTexture(tLifeBar);
    LifeBar.setTextureRect(sf::IntRect(0, 0, 51, 37));
    LifeBar.setPosition(sf::Vector2f(5,5));

    tGover.loadFromFile("gameover.png");
    Gover.setTexture(tGover);



}

void Gui::draw( sf::RenderWindow &window )
{
    window.draw(Gui);
    window.draw(LifeBar);
    window.draw(Tscore);
}

void Gui::update( short &life ,int &score )
{
    LifeBar.setTextureRect(sf::IntRect(0, 0, 17* life, 37));

    std::ostringstream ss;
    ss << score;

    Tscore.setString(   ss.str() );
}

void Gui::gameover()
{
    Tscore.setCharacterSize(32);
    Tscore.setPosition(sf::Vector2f(494,406));
    Tscore.setColor(sf::Color::White);

}

void Gui::drawGameOver(sf::RenderWindow &w)
{
    w.draw(Gover);
    w.draw(Tscore);
}























