#ifndef MISSILES_H
#define MISSILES_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace std;

class Missiles {
    private:
        sf::Sprite sprite;
        sf::Vector2f velocity;
    public:
        Missiles(float startX, float startY);
        void move();
        void setTarget(const sf::Vector2f& targetPosition);
        void update();
        sf::Sprite getSprite() const;
};

#endif