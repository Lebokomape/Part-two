#ifndef HIGHSCORE_H
#define HIGHSCORE_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

class HighScore {
    private:
        vector<pair<string, int>> highScores;
        const int maxHighScores = 10;
    public:
        HighScore(string fileName);
        void saveHighScores();
        void addHighScore(string playerName, int score);
        vector<pair<string, int>> getHighScores();
};

#endif