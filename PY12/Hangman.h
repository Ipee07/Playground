#include <string>
#include <vector>
using namespace std;
#include <iostream>
#pragma once

class Hangman {
    public:
        Hangman(string word);
        void guess(char letter);
        bool over() const;
        bool won() const;
        void draw() const;
        string get_guessed_word() const;
        string get_word() const;
    private:
        string word_;
        string guessed_word_;
        int errors_;
};