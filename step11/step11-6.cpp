#include <iostream>

using namespace std;

int main() {
    long long n = 0;

    cin >> n;

    long long count = (((n - 2) * (n - 1) / 2) * n) / 3;

    cout << count << endl; 
    cout << 3 << endl; 

    return 0;
}