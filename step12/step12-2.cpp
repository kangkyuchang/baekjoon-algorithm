#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; 

    int m = 10;
    int count = 1;
    
    while(n > m) { 
        m *= 10;
        count++;
    }

    int maxCount = 9 * count;

    int result = 0;

    for(int i = maxCount; i > 0; i--) {
        int sub = n - i;
        int sum = 0;
        int temp = sub;
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if(sum == i) {
            result = sub;
            break;
        }
    }

    cout << result << endl;
    return 0;
}