#include <iostream>

using namespace std;

int main() { // int 데이터 타입 4바이트에 테스트 케이스 수가 오버플로우 돼서 long 변경, n * 4도 수식이 맞음
    long n = 0;

    cin >> n;

    long totalSquare = (n * (1 + n)) / 2;

    long result = (totalSquare * 4) - ((n * (n - 1)) * 2);

    cout << result << endl;
}