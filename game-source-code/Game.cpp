#include "Game.h"

void Game::render(){
    window.clear();
    window.draw(player->getSprite());
    window.display();
    for (Laser& laser : playerLasers) {
         window.draw(laser.getShape());
    }
}

void Game::handleCollisions(){

}

void Game::spawnAliens(){

}


Game::Game(): window(sf::VideoMode(800, 600), "Project 2023 — Defender"){
    window.setSize(sf::Vector2u(1600, 900));
    player = new Player(0,0);
}

Game::~Game(){
    delete player;
    player = NULL;
}

void Game::run(){
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) player->moveLeft();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) player->moveRight();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) player->moveUp();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) player->moveDown();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl) && sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)) {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                playerLasers.push_back(Laser(player->getSprite().getPosition().x, player->getSprite().getPosition().y));
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
                playerLasers.push_back(Laser(player->getSprite().getPosition().x, player->getSprite().getPosition().y));
            }
        }

        for (auto it = playerLasers.begin(); it != playerLasers.end();) {
            it->update();
            if (it->isOffScreen()) {
                it = playerLasers.erase(it); 
            } else {
                ++it;
            }
        }
        render();
    }
}
