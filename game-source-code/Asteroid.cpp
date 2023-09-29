#include "Asteroid.h"

Asteroid::Asteroid(float startX, float startY, float speed) : destroyed(false) {
    this->speed = speed;
    
    sf::Texture texture;
    if (!texture.loadFromFile("resources/asteriod.png")) {
        cerr << "Error: Unable to load the Asteroid image from  resources/asteriod.png"<< endl;
    }
    sprite.setTexture(texture);
    sprite.setPosition(startX, startY);
    sprite.setScale(0.4, 0.4);
}

void Asteroid::move() {
    sf::Vector2f position = sprite.getPosition();
    sprite.move(position.x, position.y + speed);
}

bool Asteroid::isDestroyed() const {
    return destroyed;
}
