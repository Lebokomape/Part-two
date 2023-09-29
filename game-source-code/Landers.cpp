#include "Landers.h"

Landers::Landers(float startX, float startY){
    sf::Texture texture;
    if (!texture.loadFromFile("resources/lander.png")) {
        cerr << "Error: Unable to load the Landers image from  resources/lander.png"<< endl;
    }

    sprite.setTexture(texture);
    sprite.setPosition(startX, startY);
    sprite.setScale(0.4, 0.4);
}

void Landers::move(){

}

void Landers::fireMissile(){

}

void Landers::update(){

}

bool Landers::isDestroyed() const{
	return true;
}

sf::Sprite Landers::getSprite() const{
    return sprite;
}

void Landers::setTarget(const sf::Vector2f& targetPosition){

}
