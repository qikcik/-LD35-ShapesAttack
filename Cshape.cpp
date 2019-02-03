#include "Cshape.h"
#include <iostream>

void Cshape::draw(sf::RenderWindow &window)
{
    if( type == 1)
        window.draw(Vshape);
    if( type == 2)
        window.draw(Vcircle);
    if( type == 3)
        window.draw(Vtriangle);
    if( type == 4)
        window.draw(Vsquar);
}

void Cshape::grow(sf::Time czas )
{
    float x = 1;
    if(active == false) x=1.6;

    Vsize = Vsize + ( czas.asSeconds() * speed * x );

    if( type == 1)
        Vshape.setScale(sf::Vector2f(Vsize ,Vsize ));
    if( type == 2)
        Vcircle.setScale(sf::Vector2f(Vsize ,Vsize ));
    if( type == 3)
    {
        Vtriangle.setScale(sf::Vector2f(Vsize ,Vsize));
    }
    if( type == 4)
    {
        Vsquar.setScale(sf::Vector2f(Vsize  ,Vsize));
    }

}

void Cshape::Update(sf::Time czas)
{
    grow(czas);
    if( Vsize > 4.2) deleteMe = true;
}

void Cshape::Init( float szybkosc , bool x )
{
    type = (std::rand() % 4) + 1;
    if ( x == false) type = 1;
    Vsize = 0.01;
    deleteMe = false;
    active = true;
    speed = szybkosc;

    if( type == 1)
    {
        Vshape.setOrigin( sf::Vector2f(250,250));
        Vshape.setSize(sf::Vector2f(500, 500));
        Vshape.setPosition(sf::Vector2f(512,384));
        Vshape.setFillColor(sf::Color(0, 0, 0, 0));
        Vshape.setOutlineThickness(16);
        Vshape.setOutlineColor(sf::Color::White);

        Vshape.setScale(sf::Vector2f(Vsize ,Vsize ));
    }



    if( type == 2)
    {
        Vcircle.setOrigin( sf::Vector2f(250,250));
        Vcircle.setRadius(250);
        Vcircle.setPosition(sf::Vector2f(512,384));
        Vcircle.setFillColor(sf::Color(0, 0, 0, 0));
        Vcircle.setOutlineThickness(16);
        Vcircle.setOutlineColor(sf::Color::White);

        Vcircle.setScale(sf::Vector2f(Vsize ,Vsize ));
    }

    if( type == 3)
    {// trujkat
        Vtriangle.setOrigin( sf::Vector2f(250,250));
        Vtriangle.setRadius(250);
        Vtriangle.setPointCount(3);
        Vtriangle.setPosition(sf::Vector2f(512,384));
        Vtriangle.setFillColor(sf::Color(0, 0, 0, 0));
        Vtriangle.setOutlineThickness(16);
        Vtriangle.setOutlineColor(sf::Color::White);

        Vsquar.setScale(sf::Vector2f(Vsize ,Vsize ));
    }
    if( type == 4)
    {// 4 k¹t
        Vsquar.setOrigin( sf::Vector2f(250,250));
        Vsquar.setRadius(250);
        Vsquar.setPointCount(4);
        Vsquar.setPosition(sf::Vector2f(512,384));
        Vsquar.setFillColor(sf::Color(0, 0, 0, 0));
        Vsquar.setOutlineThickness(16);
        Vsquar.setOutlineColor(sf::Color::White);

        Vsquar.setScale(sf::Vector2f(Vsize ,Vsize ));
    }


}

void Cshape::accpet(bool x)
{
    if(x == true)
    {
        if( type == 1)
            Vshape.setOutlineColor(sf::Color(175,208,140));
        if( type == 2)
            Vcircle.setOutlineColor(sf::Color(175,208,140));
        if( type == 3)
            Vtriangle.setOutlineColor(sf::Color(175,208,140));
        if( type == 4)
            Vsquar.setOutlineColor(sf::Color(175,208,140));
    }

    if (x == false)
    {
        if( type == 1)
            Vshape.setOutlineColor(sf::Color::Red);
        if( type == 2)
            Vcircle.setOutlineColor(sf::Color::Red);
        if( type == 3)
            Vtriangle.setOutlineColor(sf::Color::Red);
        if( type == 4)
            Vsquar.setOutlineColor(sf::Color::Red);

    }




}
