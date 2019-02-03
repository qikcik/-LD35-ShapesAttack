#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <cstdlib>
#include <ctime>

#include <SFML/Graphics.hpp>
#include <vector>
#include "Cshape.h"
#include "Cplayer.h"
#include "Gui.h"
#include "Rules.h"

class Game
{
public:

    Gui gui;
    Rules rules;
    Sound sound;

    sf::Event zdarzenie;


    std::vector <Cshape> VECshape;
    Cplayer gracz;

    void restart();

    void init();
    void render(sf::RenderWindow &window);

    void events(sf::RenderWindow &window);
    void draw(sf::RenderWindow &window);
    void updateLogic(sf::Time) ;


};

#endif // XSHAPE_H_INCLUDED
