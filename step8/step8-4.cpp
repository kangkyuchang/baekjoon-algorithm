#include <iostream>

using namespace std;

int otherSolution(int n) { //한 변에 점 갯수 규칙이 2^n + 1, 따라서 모든 변의 점 갯수는 (2^n + 1)^2
    int num = 1;
    for(int i = 0; i < n; i++) {
        num *= 2;
    }
    num += 1;
    return num * num;
}

int main() {
    int n = 0;
    cin >> n;
    int result = 4;
    for(int i = 0; i < n; i++) {
        int rectangle = 1; 
        int root = 1; 
        int add = 1; 
        for(int j = 0; j < i; j++) {
            rectangle *= 4;
            add *= 2;
        }
        for(int j = 1; j <= rectangle; j++) {
            if(j * j == rectangle) {
                root = j;
                break;
            }
        }
        int column = (root + 1) * add; 
        int row = root * (add + 1); 
        result += column + row + rectangle; 
    }
    
    cout << result << endl;

    return 0;
}