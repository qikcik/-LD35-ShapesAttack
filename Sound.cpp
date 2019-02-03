#include "Sound.h"

void Sound::init()
{
    buf[0].loadFromFile("1.wav"); sounds[0].setBuffer(buf[0]);
    buf[1].loadFromFile("2.wav"); sounds[1].setBuffer(buf[1]);
    buf[2].loadFromFile("3.wav"); sounds[2].setBuffer(buf[2]);
    buf[3].loadFromFile("4.wav"); sounds[3].setBuffer(buf[3]);
    buf[4].loadFromFile("5.wav"); sounds[4].setBuffer(buf[4]);
}

void  Sound::play(int x)
{
    sounds[ x - 1 ].play();
}

