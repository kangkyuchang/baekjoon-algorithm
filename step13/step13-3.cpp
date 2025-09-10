#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int *arr = new int[n];

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;

        arr[i] = input;
    }

    for(int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[maxIndex] < arr[j]) {
                maxIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }

    cout << arr[k-1] << endl;

    return 0;
}