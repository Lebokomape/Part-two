#ifndef SHIELD_H
#define SHIELD_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace std;

class Shield {
    private:
        bool activated;
        int cooldownDuration;
        int remainingDuration;
        sf::Clock cooldownClock;
        sf::Clock durationClock;
    public:
        Shield();
        void update();
        void activate();
        int getRemainingDuration() const;
        bool isActivated() const;
};

#endif