#ifndef SHIP_H
#define SHIP_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace std;

class Ship {
    private:
        sf::Texture texture;
        sf::Sprite sprite;
        float  movementSpeed;
    public:
        Ship(float startX, float startY, const std::string& textureFile);
        void moveUp();
        void moveDown();
        void moveRight();
        void moveLeft();
        sf::Sprite getSprite();
};

#endif
