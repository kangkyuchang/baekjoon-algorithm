#include <iostream>

using namespace std;

int main() {
    int m = 0;
    int n = 0;
    int minPrime = 0;
    int sum = 0;
    cin >> m >> n;
    for(; m <= n; m++) {
        bool isPrime = m == 1 ? false : true;
        for(int i = 2; i < m; i++) {
            if(m % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            if(minPrime == 0)
                minPrime = m;
            sum += m;
        }
    }

    if(minPrime == 0) {
        minPrime = -1;
    }
    else {
        cout << sum << endl;
    }

    cout << minPrime << endl;

    return 0;
}