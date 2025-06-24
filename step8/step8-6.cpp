#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    bool right = true;
    int denominater = 1;
    int numerator = 1;
    int reverseN = 1;
    int reverseDM = 1;
    while(--n > 0) {
        if(reverseN == numerator && reverseDM == denominater) {
            if(right) {
                denominater++;
            }
            else {
                numerator++;
            }
            reverseN = denominater;
            reverseDM = numerator;
            right = !right;
        }
        else {
            if(right) {
                numerator --;
                denominater ++;
            }
            else {
                numerator ++;
                denominater --;
            }
        }
    }
    cout << numerator << "/" << denominater << endl;
}