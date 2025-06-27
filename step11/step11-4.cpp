#include <iostream>

using namespace std;

int main() {
    long long n = 0;

    cin >> n;

    long long count = ((n-1) * (1 + n - 1)) / 2;

    cout << count << endl; 
    cout << 2 << endl; 

    return 0;
}