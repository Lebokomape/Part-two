#ifndef LANDERS_H
#define LANDERS_H
#include "Missiles.h"

class Landers {
    private:
        Missiles* missiles;
        sf::Sprite sprite;
        sf::Vector2f velocity;
    public:
        Landers(float startX, float startY);
        void move();
        void fireMissile();
        void update();
        bool isDestroyed() const;
        sf::Sprite getSprite() const;
        void setTarget(const sf::Vector2f& targetPosition);
};

#endif