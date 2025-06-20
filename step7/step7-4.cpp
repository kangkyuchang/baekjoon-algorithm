#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    int ** matrix = new int*[n];
    for(int i = 0; i < n; i++) {
        matrix[i] = new int[2];
        int pointer = 0;
        string input, split;
        getline(cin, input);
        istringstream ss(input);
        while(ss >> split) {
            matrix[i][pointer++] = stoi(split);
        }
    }

    const int BOARDSIZE = 100;
    bool board[BOARDSIZE][BOARDSIZE] = { false };

    int totalWidth = 0;

    for(int i = 0; i < n; i++) {
        int rectangle[2] = { matrix[i][0], matrix[i][1] };
        for(int x = rectangle[0]; x < rectangle[0] + 10; x++) {
            for(int y = rectangle[1]; y < rectangle[1] + 10; y++) {
                if(!board[x][y]) {
                    board[x][y] = true;
                    totalWidth++;
                }
            }
        }
    }
    cout << totalWidth << endl;

    return 0;
}