#ifndef ASTEROID_H
#define ASTEROID_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace std;

class Asteroid {
    private:
        sf::Sprite sprite;
        bool destroyed;
        float speed;
    public:
        Asteroid(float startX, float startY, float speed);
        void move();
        bool isDestroyed() const;
};

#endif