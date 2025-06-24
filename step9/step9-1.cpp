#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace std;

int main() {
    int a = -1;
    int b = -1;
    vector<array<int, 2>> input;


    while(true) {
        cin >> a >> b;

        if(a == 0 && b == 0) {
            break;
        }

        input.push_back({ a, b });
    }
    for(auto iter = input.begin(); iter != input.end(); ++iter) {
        string result;
        int num1 = (*iter).at(0);
        int num2 = (*iter).at(1);
        if(num2 % num1 == 0) {
            result = "factor";
        }
        else if(num1 % num2 == 0) {
            result = "multiple";
        }
        else {
            result = "neither";
        }
        cout << result << endl;
    }
}