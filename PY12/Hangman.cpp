#include "Hangman.h"

Hangman::Hangman(string word) : word_(word) {
    size_t len = word.size();
    for (size_t i = 0; i < len; i++) {
        guessed_word_.append("?");
    }
    errors_ = 0;
    forca_ = {" +---+ ", " |   | ", " |     ", " |     ", " |     ", " |     ", "======="};
}

void Hangman::guess(char letter) {
    bool found = false;
    for (size_t i = 0; i < word_.size(); i++) {
        if (tolower(letter) == tolower(word_[i])) {
            guessed_word_[i] = letter;
            found = true;
        }
    }
    if (found == false) errors_++;
}

bool Hangman::over() const {
    if (errors_ >= 6) return true;
    return false;
}

bool Hangman::won() const {
    if (guessed_word_ == word_ && errors_ < 6) {
        return true;
    }
    return false;
}

void Hangman::draw() const {
    vector<string> res;
    res = {" +---+ ", " |   | ", " |     ", " |     ", " |     ", " |     ", "======="};
    if (errors_ >= 1) {
        res[2][5] = 'O';
    }
    if (errors_ >= 2) {
        res[3][5] = '|';
    }
    if (errors_ >= 3) {
        res[3][4] = '/';
    }
    if (errors_ >= 4) {
        res[3][6] = '\\';
    }
    if (errors_ >= 5) {
        res[4][4] = '/';
    }
    if (errors_ >= 6) {
        res[4][6] = '\\';
    }
    
    for (string s : res) {
        cout << s << "\n";
    }

}

string Hangman::get_guessed_word() const {
    return guessed_word_;
}
string Hangman::get_word() const {
    return word_;
}