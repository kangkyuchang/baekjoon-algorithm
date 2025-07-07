#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        arr[i] = input;
    }

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        cout << arr[i] << endl;
    }

    cout << arr[n - 1] << endl;

    return 0;
}