#ifndef GAME_H
#define GAME_H
#include <vector>
#include <iostream>
#include "Player.h"
#include "Laser.h"
using namespace std;

class Game {
    private:
        Player* player;
        sf::RenderWindow window;
        vector<Laser> playerLasers;
        void render();
        void handleCollisions();
        void spawnAliens();

    public:
        Game();
        ~Game();
        void run();
};

#endif