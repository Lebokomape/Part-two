#ifndef LASER_H
#define LASER_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace std;

class Laser {
    private:
        sf::RectangleShape shape;
        sf::Vector2f velocity;
    public:
        Laser(float startX, float startY);
        bool isOffScreen() const;
        sf::RectangleShape getShape();
        void update();
};

#endif