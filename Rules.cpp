#include "Rules.h"

void Rules::Innit()
{
    loopShape = 0;
    loopSpeed = 100;
    speed = 0.8;
    life = 3;
    score = 0;
    run = true;
}

void Rules::shapeControler( std::vector <Cshape> &VECshape )
{
    loopShape ++;
    if (loopShape > loopSpeed)
    {
        loopShape = 0;
            VECshape.push_back( Cshape() );
            VECshape[VECshape.size() -1 ].Init( speed , true);
            nextlvl();
    }



    for( int i = 0; i < VECshape.size(); i++)
    {
       if ( VECshape[i].deleteMe == true)
            VECshape.erase( VECshape.begin() + i );

    }
}

void Rules::checkColision( std::vector <Cshape> &VECshape , Cplayer &gracz , Sound &sound)
{

    for( int i = 0; i < VECshape.size() ; i++)
    {
       if ( (VECshape[i].Vsize > 0.90) && (VECshape[i].Vsize < 1.10) && VECshape[i].active==true )
       {

           if(VECshape[i].type == gracz.type)
           {

                VECshape[i].accpet(true);
                VECshape[i].active=false ;
                sound.play(VECshape[i].type);
                score ++;
           }
           else
           {
               VECshape[i].accpet(false);
               VECshape[i].active=false ;
               sound.play(5);
               life --;
           }
       }


    }
}

bool Rules::gameover(Gui &gui , sf::Event &event)
{
    if( life  <= 0)
    {
        run = false;
        gui.gameover();
    }




    return false;
}


void Rules::nextlvl()
{
    if (speed < 2.5)
    {
        speed += 0.0025;
        std::cout << speed;
        loopSpeed -= 0.1;
    }

}
