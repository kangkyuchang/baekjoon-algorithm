#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;
    while(true) {
        int input = -1;
        cin >> input;
        if(input == -1)
            break;

        vec.push_back(input);
    }

    for(int i = 0; i < vec.size(); i++) {
        vector<int> divisors = { 1 };
        int num = vec.at(i);
        int sum = 1;

        for(int j = 2; j < num; j++) {
            if(num % j == 0) {
                divisors.push_back(j);
                sum += j;
            }
        }
        
        cout << num;
        if(num == sum) {
            cout << " = ";
            for(int j = 0; j < divisors.size(); j++) {
                if(j != 0) {
                    cout << " + ";
                }
                cout << divisors.at(j);
            }
        }
        else {
            cout << " is NOT perfect.";
        }
        cout << endl;
    }
    return 0;
}