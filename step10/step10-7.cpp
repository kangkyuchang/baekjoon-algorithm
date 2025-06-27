#include <iostream>
#include <vector>
#include <array>
#include <string>

using namespace std;

int main() {
    vector<array<int, 3>> vec;

    while(true) {
        int a, b, c;
        cin >> a >> b >> c;

        if(a == 0 && b == 0 && c == 0)
            break;

        array<int, 3> arr = { a, b, c };
        vec.push_back(arr);
    } 

    for(array<int, 3> &arr : vec) {
        int a = arr[0];
        int b = arr[1];
        int c = arr[2];
        int maxIndex = 0;

        string result;

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

        for(int i = 1; i < arr.size(); i++) {
            int nowMax = arr[maxIndex];
            int num = arr[i];
            if(num > nowMax) {
                maxIndex = i;
            }
        }

        int sum = 0;

        for(int i = 0; i < arr.size(); i++) {
            if(i == maxIndex)
                continue;
            
            sum += arr[i];
        }

        if(sum <= arr[maxIndex]) {
            result = "Invalid";
        }

        cout << result << endl;
    }

    return 0;
}