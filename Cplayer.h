#ifndef CPLAYER_H_INCLUDED
#define CPLAYER_H_INCLUDED

#include <SFML/Graphics.hpp>


class Cplayer
{
public:
    sf::RectangleShape Vshape;
    sf::CircleShape Vcircle;
    sf::CircleShape Vtriangle;
    sf::CircleShape Vsquar;


    char type;

    void KeyboardSetType();

    void Init();
    void Update();
    void draw(sf::RenderWindow &window);







};


#endif // XSHAPE_H_INCLUDED
