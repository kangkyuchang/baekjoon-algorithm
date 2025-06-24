#include <iostream>

using namespace std;

int main() {
    int input = 0;
    cin >> input;
    int* moneyArr = new int[input];
    for(int i = 0; i < input; i++) {
        int inputMoney = 0;
        cin >> inputMoney;
        moneyArr[i] = inputMoney;
    }

    for(int i = 0; i < input; i++) {
        int money = moneyArr[i];

        int quarter = money / 25;
        money %= 25;

        int dime = money / 10;
        money %= 10;

        int nickel = money / 5;
        int penny = money %= 5;

        cout << quarter << " " << dime << " " << nickel << " " << penny << endl;
    }

    return 0;
}