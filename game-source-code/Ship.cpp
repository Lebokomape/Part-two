#include "Ship.h"

Ship::Ship(float startX, float startY, const std::string& textureFile){
    movementSpeed = 1.0f;
    if (!texture.loadFromFile(textureFile)) {
        cerr << "Error: Unable to load the ship image from " << textureFile << endl;
    }
    sprite.setTexture(texture);
    sprite.setScale(0.5, 0.5);
    sprite.setPosition(startX, startY);
}

void Ship::moveUp(){
    sf::Vector2f position = sprite.getPosition();
    sprite.setPosition(position.x, position.y - movementSpeed);
}

void Ship::moveDown(){
    sf::Vector2f position = sprite.getPosition();
    sprite.setPosition(position.x, position.y + movementSpeed);
}

void Ship::moveRight(){
    sf::Vector2f position = sprite.getPosition();
    sprite.setPosition(position.x+movementSpeed, position.y);
    sprite.setScale(0.5, 0.5);
}

void Ship::moveLeft(){
    sf::Vector2f position = sprite.getPosition();
    sprite.setPosition(position.x-movementSpeed, position.y);
    sprite.setScale(-0.5, 0.5);
}

sf::Sprite  Ship::getSprite() {
    return sprite;
}
