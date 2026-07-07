#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> res = {" +---+", " |   |", " |", " |", " |", " |", "======="};
    for (string c : res) {
        cout << c << "\n";
    }
    return 0;
}