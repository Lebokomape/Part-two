#include "Shield.h"

Shield::Shield() : activated(false), cooldownDuration(5000), remainingDuration(0) {}

void Shield::activate() {
    if (activated == false && cooldownClock.getElapsedTime().asMilliseconds() >= cooldownDuration) {
        activated = true;
        remainingDuration = 5000;
        durationClock.restart();
        cooldownClock.restart();
    }
}

void Shield::update() {
    if (activated == true && durationClock.getElapsedTime().asMilliseconds() >= remainingDuration) {
        activated = false;
    }
}

int Shield::getRemainingDuration() const {
    if (activated == true) {
        int elapsedDuration = durationClock.getElapsedTime().asMilliseconds();
        return remainingDuration - elapsedDuration;
    }
    return 0;
}

bool Shield::isActivated() const {
    return activated;
}
