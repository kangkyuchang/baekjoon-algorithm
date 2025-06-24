#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int hive = 1;
    int count = 1;
    while(n > hive) {
        hive += count++ * 6;
    }
    cout << count << endl;

    return 0;
}