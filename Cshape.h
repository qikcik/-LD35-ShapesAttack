#ifndef CSHAPE_H_INCLUDED
#define CSHAPE_H_INCLUDED
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <ctime>
#include "Cshape.h"



class Cshape
{
public:
    sf::RectangleShape Vshape;
    sf::CircleShape Vcircle;
    sf::CircleShape Vtriangle;
    sf::CircleShape Vsquar;

    char type;
    float Vsize;
    float speed;
    bool deleteMe;
    bool active;

    void grow(sf::Time );

    void accpet(bool);
    void Init(float szybkosc , bool x);
    void Update(sf::Time);
    void draw(sf::RenderWindow &window);







};


#endif // XSHAPE_H_INCLUDED
