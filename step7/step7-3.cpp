#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    const int N = 5;
    const int COLUMN = 15;
    int maxColumn = 0;
    char matrix[N][COLUMN] = {0};
    for(int i = 0; i < N; i++) {
        string input;
        getline(cin, input);
        int length = input.length();
        if(length > maxColumn && length <= COLUMN) {
            maxColumn = length;
        }
        for(int j = 0; j < length; j++) {
            if(j >= COLUMN) {
                break;
            }
            matrix[i][j] = input[j];
        }
    }
    for(int i = 0; i < maxColumn; i++) {
        for(int j = 0; j < N; j++) {
            char c = matrix[j][i];
            if(c == '\0') {
                continue;
            }
            cout << c;
        }
    }
    cout << endl;
    return 0;
}