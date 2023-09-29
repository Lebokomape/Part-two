#include "Bomber.h"

Bomber::Bomber(float startX, float startY) : destroyed(false), movementSpeed(2.0f) {
   if (!texture.loadFromFile("resources/bomber.png")) {
        cerr << "Error: Unable to load the Bomber image from  resources/bomber.png"<< endl;
    }

    sprite.setTexture(texture);
    sprite.setPosition(startX, startY);
    sprite.setScale(0.4, 0.4);
}

void Bomber::move() {
    sprite.move(sf::Vector2f(movementSpeed, 0));
}

void Bomber::update() {
    if (sprite.getPosition().x < -sprite.getGlobalBounds().width) {
        destroyed = true;
    }
}

bool Bomber::isDestroyed() const {
    return destroyed;
}

sf::Sprite Bomber::getSprite() const {
    return sprite;
}

void Bomber::dropMine(std::vector<Mine>& mines) {
    mines.push_back(Mine(sprite.getPosition().x, sprite.getPosition().y));
}

void Bomber::handleMinesCollision(const sf::FloatRect& playerBounds, vector<Mine>& mines){
    /*for (auto it = mines.begin(); it != mines.end();) {
        if (it->getGlobalBounds().intersects(playerBounds)) {
            it = mines.erase(it); 
        } else {
            ++it;
        }
    }*/
}

void Bomber::handleCollision(const sf::FloatRect& playerBounds) {
    if (sprite.getGlobalBounds().intersects(playerBounds)) {
        destroyed = true;
    }
}

void Bomber::handleCollision(const std::vector<sf::FloatRect>& laserBounds) {
    for (const auto& laserBounds : laserBounds) {
        if (sprite.getGlobalBounds().intersects(laserBounds)) {
            destroyed = true;
        }
    }
}
