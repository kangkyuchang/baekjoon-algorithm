#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, w, h;
    
    cin >> x >> y >> w >> h;

    int minDistance = x > y ? y : x;

    int wDistance = abs(x - w);

    if(wDistance < minDistance) {
        minDistance = wDistance;
    }

    int hDistance = abs(y - h);

    if(hDistance < minDistance) {
        minDistance = hDistance;
    }

    cout << minDistance << endl;

    return 0;
}