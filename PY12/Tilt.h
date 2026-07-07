#pragma once

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tilt {
    public:
        Tilt(const vector<vector<char>> board);
        void tilt(char direction);
        bool over() const;
        bool won() const;
        void draw() const;
    private:
        vector<vector<char>> board;
};