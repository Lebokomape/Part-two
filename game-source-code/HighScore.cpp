#include "HighScore.h"

HighScore::HighScore(string fileName){
    ifstream inputFile;
    inputFile.open(fileName.c_str());

    if (inputFile.is_open()) {
        highScores.clear();
        string playerName;
        int score;

        while (inputFile >> playerName >> score) {
            highScores.push_back(std::make_pair(playerName, score));
        }
        inputFile.close();
    }
}

void HighScore::saveHighScores(){
    ofstream file("resources/highscores.txt");

    if (file.is_open()) {
        for (const auto& entry : highScores) {
            file << entry.first << " " << entry.second << "\n";
        }
        file.close();
    }
}

void HighScore::addHighScore(string playerName, int score){
    highScores.push_back(std::make_pair(playerName, score));
    sort(highScores.rbegin(), highScores.rend());

    if (highScores.size() > maxHighScores) {
        highScores.pop_back();
    }

    saveHighScores();
}

vector<pair<string, int>> HighScore::getHighScores(){
    return highScores;
}
