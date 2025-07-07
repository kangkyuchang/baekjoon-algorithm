#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int countThreeKG;
    int maxFive = n / 5;
    int result;

    while(maxFive > 0) {
        int remainder = n - (5 * maxFive);
        if(remainder % 3 == 0) {
            countThreeKG = remainder / 3;
            break;
        }
        maxFive --;
    }

    if(maxFive == 0) {
        if(n % 3 == 0) {
            result = n / 3;
        }
        else
            result = -1;
    }
    else {
        result = maxFive + countThreeKG;
    }

    cout << result << endl;
}