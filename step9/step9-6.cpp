#include <iostream>
#include <vector>

using namespace std;

int main() {
    int input = 0;

    cin >> input;

    for(int i = 2; i <= input; i++) {
        while(input % i == 0) {
            input /= i;
            cout << i << endl;
        }
    }

    return 0;
}