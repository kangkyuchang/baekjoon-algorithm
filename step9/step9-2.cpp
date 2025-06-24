#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    int k = 0;
    int result = 0;

    vector<int> divisor;

    cin >> n >> k;

    divisor.push_back(1);
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            divisor.push_back(i);
        }
    }

    divisor.push_back(n);

    k -= 1;

    if(k < divisor.size()) {
        result = divisor.at(k);
    }

    cout << result << endl;
    
    return 0;
}