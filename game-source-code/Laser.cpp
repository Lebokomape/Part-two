#include "Laser.h"

Laser::Laser(float startX, float startY) {
    shape.setSize(sf::Vector2f(3.0f, 10.0f));
    shape.setFillColor(sf::Color::Red);
    shape.setPosition(startX, startY);
    velocity = sf::Vector2f(0.0f, -5.0f);
}

bool Laser::isOffScreen() const {
    return shape.getPosition().y + shape.getSize().y < 0;
}

sf::RectangleShape Laser::getShape() {
    return shape;
}

void Laser::update() {
    shape.move(velocity);
}
