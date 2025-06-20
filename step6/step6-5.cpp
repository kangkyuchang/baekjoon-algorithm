#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    char charArr[26];
    int countArr[26];
    int charPointer = 0;
    int maxCount = 0;
    bool isDuplex = false;
    int maxCharIndex = -1;
    for(int i = 0; i < str.length(); i++) {
        char c = str[i];
        c = toupper(c);
        int index = -1;
        for(int j = 0; j < sizeof(charArr) / sizeof(charArr[0]); j++) {
            if(charArr[j] == c) {
                index = j;
                break;
            }
        }
        if(index != -1) {
            countArr[index]++;
        }
        else {
            charArr[charPointer] = c;
            countArr[charPointer] = 1;
            charPointer++;
        }
    }
    for(int i = 0; i < charPointer; i++) {
        int count = countArr[i];
        if(count > maxCount) {
            maxCount = count;
            maxCharIndex = i;
            isDuplex = false;
        }
        else if(count == maxCount) {
            isDuplex = true;
        }
    }
    char result = isDuplex ? '?' : charArr[maxCharIndex];
    cout << result << endl;
    return 0;
}