#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    string result;

    cin >> a >> b >> c;

    if(a == b) {
        result = a == c ? "Equilateral" : "Isosceles";
    }
    else if(b == c) {
        result = b == a ? "Equilateral" : "Isosceles";
    }
    else if(c == a) {
        result = c == b ? "Equilateral" : "Isosceles";
    }
    else {
        result = "Scalene";
    }

    int totalDegree = a + b + c;

    if(totalDegree != 180) {
        result = "Error";
    }

    cout << result << endl;

    return 0;
}