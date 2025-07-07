#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    bool **input = new bool*[n];

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        bool *row = new bool[m];
        for(int j = 0; j < m; j++) {
            row[j] = s.at(j) == 'B';
        }
        input[i] = row;
    }

    int result = 64;

    const int boardCount = (n - 7) * (m - 7);

    bool ***boards = new bool**[boardCount];
    int pointer = 0;
    for(int i = 0; i < n - 7; i++) {
        for(int j = 0; j < m - 7; j++) {
            bool **column = new bool*[8];
            for(int k = i; k < i + 8; k++) {
                bool *row = new bool[8];
                for(int l = j; l < j + 8; l++) {
                    row[l-j] = input[k][l];
                }
                column[k-i] = row;
            }
            boards[pointer++] = column;
        }
    }

    for(int i = 0; i < boardCount; i++) {
        int count[2] = { 0, 0 };
        int startColor = -1;
        bool **board = boards[i];
        for(int j = 0; j < 8; j++) {
            bool *row = board[j];
            for(int k = 0; k < 8; k++) {
                if(k == 0) {
                    if(j != 0) {
                        bool *preRow = board[j - 1];
                        bool preCell = preRow[0];
                        bool nowCell = row[k];
                        if(preCell == nowCell) {
                            row[k] = !nowCell;
                            count[startColor] += 1;
                        }
                        else {
                            count[(startColor + 1) % 2] += 1;
                        }
                    }
                    else {
                        bool nowCell = row[k];
                        startColor = nowCell;
                        count[(startColor + 1) % 2] += 1;
                    }
                    continue;
                }
                bool preCell = row[k - 1];
                bool nowCell = row[k];
                if(preCell == nowCell) {
                    row[k] = !nowCell;
                    count[startColor] += 1;
                }
                else {
                    count[(startColor + 1) % 2] += 1;
                }
            }
        } 
        result = min(result, min(count[0], count[1]));
    }

    cout << result << endl;

    return 0;
}