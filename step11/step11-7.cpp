#include <iostream>

using namespace std;

int main() {
    int a1 = 0;
    int a2 = 0;
    int c = 0;
    int n = 0;

    cin >> a1 >> a2 >> c >> n;

    int f = (a1 * n) + a2;
    int z = c * n;

    int result = 0;

    if(a1 <= c && f <= z)
        result = 1;

    cout << result << endl;

    return 0;
}