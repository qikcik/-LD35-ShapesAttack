#ifndef SOUND_H_INCLUDED
#define SOUND_H_INCLUDED
#include <SFML/Audio.hpp>

class Sound
{
public:

    sf::SoundBuffer buf[5];
    sf::Sound sounds[5];

    void init();
    void play(int x);

};



#endif // SOUND_H_INCLUDED
