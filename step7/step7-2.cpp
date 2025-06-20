#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {
    const int ROW = 9;
    const int COLUMN = 9;
    int matrix[ROW][COLUMN];
    int max = 0;
    int location[2];

    for(int i = 0; i < ROW; i++) {
        int pointer = 0;
        string input, split;
        getline(cin, input);
        istringstream ss(input);
        while(ss >> split) {
            if(pointer >= COLUMN) {
                break;
            }
            matrix[i][pointer++] = stoi(split);
        }
    }

    for(int i = 0; i < ROW; i++) {
        for(int j = 0; j < COLUMN; j++) {
            int num = matrix[i][j];
            if(num >= max) { //최댓값이 두 개 이상이면 가장 마지막에 있는 위치를 반환해야함
                max = num;
                location[0] = i + 1;
                location[1] = j + 1;
            }
        }
    }

    cout << max << endl;
    cout << location[0] << " " << location[1] << endl;

    return 0;
}