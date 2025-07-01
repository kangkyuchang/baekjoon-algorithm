#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, d, e, f;

    cin >> a >> b >> c >> d >> e >> f;

    int x = 0 , y = 0;

    if(a == 0) {
        y = c / b;
        x = (f - (e * y)) / d;
    }
    else if(d == 0) {
        y = f / e;
        x = (c - (b * y)) / a;
    }
    else {
        int coefficientY = 0;
        int constant = 0;
        if(abs(a) != abs(d)) {
            int temp = a;
            a *= d;
            b *= d;
            c *= d;
            
            d *= temp;
            e *= temp;
            f *= temp;
        }
        if(a == d) {
            coefficientY = b - e;
            constant = c - f;
        }
        else {
            coefficientY = b + e;
            constant = c + f;
        }
        y = constant / coefficientY;
        x = (c - (b * y)) / a;
    }

    cout << x << " " << y;

    return 0;
}