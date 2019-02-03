#ifndef GUI_H_INCLUDED
#define GUI_H_INCLUDED
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>


class Gui
{
public:

    sf::Font font;
    sf::Text Tscore;

    sf::Sprite Gui;
    sf::Texture tGui;

    sf::Sprite Gover;
    sf::Texture tGover;

    sf::Sprite LifeBar;
    sf::Texture tLifeBar;


    void Init();
    void draw(sf::RenderWindow &w);
    void update(short &life ,int &score );
    void gameover();
    void run();
    void drawGameOver(sf::RenderWindow &w);




};



#endif // GUI_H_INCLUDED
