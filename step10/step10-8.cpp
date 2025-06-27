#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    int arr[3] = { a, b, c };

    int maxIndex = 0;

    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; i < length ; i++) {
        int nowMax = arr[maxIndex];
        int num = arr[i];
        if(num > nowMax) {
            maxIndex = i;
        }
    }

    int sum = 0;

    for(int i = 0; i < length; i++) {
        if(i == maxIndex)
            continue;
        sum += arr[i];
    }

    if(arr[maxIndex] >= sum) {
        arr[maxIndex] = sum - 1;
    }

    sum += arr[maxIndex];

    cout << sum << endl;

    return 0;
}