#include <iostream>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int v = 0;
    
    int day = 0;

    cin >> a >> b >> v;

    int climb = a - b;

    int n = v - a;

    day = (n / climb) + 1;

    if(n % climb > 0) {
        day += 1;
    }

    cout << day << endl;

    return 0;
}