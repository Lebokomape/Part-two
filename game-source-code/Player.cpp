#include "Player.h"

Player::Player(float startX, float startY){
    ship = new Ship(startX, startY, "resources/spaceship.png");
}

Player::~Player(){
    delete ship;
    ship = NULL;
}

void Player::moveUp(){
    ship->moveUp();
}

void Player::moveDown(){
    ship->moveDown();
}

void Player::moveRight(){
    ship->moveRight();
}

void Player::moveLeft(){
    ship->moveLeft();
}

sf::Sprite Player::getSprite() {
   return ship->getSprite();
}
