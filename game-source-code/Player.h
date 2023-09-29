#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Ship.h"

class Player {
    private:
        Ship* ship;
    public:
        Player(float startX, float startY);
        ~Player();
        void moveUp();
        void moveDown();
        void moveRight();
        void moveLeft();
        sf::Sprite getSprite();
};

#endif
