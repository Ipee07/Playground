#include <string>
using namespace std;
#pragma once

class Hangman {
    Hangman(string word);
    void guess(char letter);
    bool over() const;
    bool won() const;
    void draw() const;
};