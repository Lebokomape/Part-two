#ifndef BOMBER_H
#define BOMBER_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Mine.h"
using namespace std;

class Bomber {
    private:
        sf::Sprite sprite;
        sf::Texture texture;
        float movementSpeed;
        bool destroyed;
    public:
        Bomber(float startX, float startY);
        void move();
        void update();
        bool isDestroyed() const;
        sf::Sprite getSprite() const;

        void dropMine(std::vector<Mine>& mines);
        void handleMinesCollision(const sf::FloatRect& playerBounds, vector<Mine>& mines);
        void handleCollision(const sf::FloatRect& playerBounds);
        void handleCollision(const std::vector<sf::FloatRect>& laserBounds);
};

#endif
