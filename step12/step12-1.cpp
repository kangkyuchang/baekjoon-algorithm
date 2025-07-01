#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    int max = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                if(sum > m)
                    continue;
                if(sum > max)
                    max = sum;
            }
        }
    }

    cout << max << endl;

    return 0;
}