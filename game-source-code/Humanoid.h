#ifndef HUMANOID_H
#define HUMANOID_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace std;

class Humanoid {
    private:
        sf::Sprite sprite;
        sf::Texture texture;
        bool abducted;
        bool rescued;
        float  movementSpeed;
    public:
        Humanoid(float startX, float startY);
        void move();
        void isAbducted();
        bool isRescued() const;
        void update();
        sf::Sprite getSprite() const;
};

#endif