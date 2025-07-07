#include <iostream>

using namespace std;

int main() {

    int arr[5];

    int sum = 0;

    for(int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        arr[i] = n;
        sum += n;
    }

    for(int i = 0; i < 4; i++) {
        int minIndex = i;
        for(int j = i + 1; j < 5; j++) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    int average = sum / 5;
    int median = arr[5/2];

    cout << average << endl;
    cout << median << endl;

    return 0;
}