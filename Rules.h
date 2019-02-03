#ifndef RULES_H_INCLUDED
#define RULES_H_INCLUDED

#include <cstdlib>
#include <ctime>
#include <iostream>

#include <SFML/Graphics.hpp>
#include <vector>
#include "Cshape.h"
#include "Cplayer.h"
#include "Gui.h"
#include "Rules.h"
#include "Sound.h"

class Rules
{
public:

    short loopShape;
    short loopSpeed;
    short life;
    int  score;
    float speed;
    bool run;

    void Innit();
    void shapeControler(std::vector <Cshape> &VECshape );
    void checkColision( std::vector <Cshape> &VECshape  , Cplayer &gracz , Sound &sound );
    bool gameover(Gui &gui , sf::Event &event);
    void nextlvl();

};



#endif // RULES_H_INCLUDED
