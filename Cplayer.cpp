#include "Cplayer.h"

void Cplayer::draw(sf::RenderWindow &window)
{
    if(type == 1)
        window.draw(Vshape);
    if(type == 2)
        window.draw(Vcircle);
    if(type == 3)
        window.draw(Vtriangle);
    if(type == 4)
        window.draw(Vsquar);
}

void Cplayer::KeyboardSetType()
{
     if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
        type = 1;
     if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
        type = 2;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
        type = 3;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
        type = 4;
}

void Cplayer::Update()
{
    KeyboardSetType();
}

void Cplayer::Init()
{
    //kwadrat
    Vshape.setOrigin( sf::Vector2f(254,254));
    Vshape.setSize(sf::Vector2f(508, 508));
    Vshape.setPosition(sf::Vector2f(512,384));
    Vshape.setFillColor(sf::Color(0, 0, 0, 0));
    Vshape.setOutlineThickness(8);
    Vshape.setOutlineColor(sf::Color::Green);
        //kolo
    Vcircle.setOrigin( sf::Vector2f(254,254));
    Vcircle.setRadius(254);
    Vcircle.setPosition(sf::Vector2f(512,384));
    Vcircle.setFillColor(sf::Color(0, 0, 0, 0));
    Vcircle.setOutlineThickness(8);
    Vcircle.setOutlineColor(sf::Color::Green);
    // trujkat
    Vtriangle.setOrigin( sf::Vector2f(254,254));
    Vtriangle.setRadius(254);
    Vtriangle.setPointCount(3);
    Vtriangle.setPosition(sf::Vector2f(512,384));
    Vtriangle.setFillColor(sf::Color(0, 0, 0, 0));
    Vtriangle.setOutlineThickness(8);
    Vtriangle.setOutlineColor(sf::Color::Green);
    // 4 k¹t
    Vsquar.setOrigin( sf::Vector2f(254,254));
    Vsquar.setRadius(254);
    Vsquar.setPointCount(4);
    Vsquar.setPosition(sf::Vector2f(512,384));
    Vsquar.setFillColor(sf::Color(0, 0, 0, 0));
    Vsquar.setOutlineThickness(8);
    Vsquar.setOutlineColor(sf::Color::Green);

    type = 1;

}
