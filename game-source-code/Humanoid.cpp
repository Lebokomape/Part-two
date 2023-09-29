#include "Humanoid.h"

Humanoid::Humanoid(float startX, float startY){
    if (!texture.loadFromFile("resources/humanoid.png")) {
        cerr << "Error: Unable to load the Humanoid image from  resources/humanoid.png"<< endl;
    }

    sprite.setTexture(texture);
    sprite.setPosition(startX, startY);
    sprite.setScale(0.4, 0.4);
    abducted = false;
    rescued = false;
    movementSpeed = 0.3f;
}

void Humanoid::move(){
    sf::Vector2f position = sprite.getPosition();
    sprite.setPosition(position.x, position.y + movementSpeed);
}

void Humanoid::isAbducted(){
    abducted = true;
}

bool Humanoid::isRescued() const{
    return rescued;
}

void Humanoid::update(){

}

sf::Sprite Humanoid::getSprite() const{
    return sprite;
}
