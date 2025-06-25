#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int count = 0;

    for(int i = 0; i < n; i++) {
        int num = 0;
        cin >> num;
        bool isPrime = num == 1 ? false : true;
        for(int j = 2; j < num; j++) {
            if(num % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}