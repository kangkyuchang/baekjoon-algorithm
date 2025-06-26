#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<array<int, 2>> vec;

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        array<int, 2> arr = { x, y };
        vec.push_back(arr);
    }

    array<int, 2> arr = vec.at(0);
    int minX = arr[0], maxX = arr[0];
    int minY = arr[1], maxY = arr[1];

    for(int i = 1; i < vec.size(); i++) {
        arr = vec.at(i);
        int x = arr[0];
        int y = arr[1];
        if(minX > x) {
            minX = x;
        }
        else if(maxX < x) {
            maxX = x;
        }

        if(minY > y) {
            minY = y;
        }
        else if(maxY < y) {
            maxY = y;
        }
    }

    int result = (maxX - minX) * (maxY - minY);

    cout << result << endl;
}