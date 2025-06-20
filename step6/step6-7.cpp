#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAXSIZE = 100;
    int result = 0;
    int n;
    cin >> n;
    cin.ignore();

    if(n > MAXSIZE) {
        n = MAXSIZE;
    }

    string str[MAXSIZE];

    for(int i = 0; i < n; i++) {
        getline(cin, str[i]);
    }

    for(int i = 0; i < n; i++) {
        bool isGroupWord = true;
        string s = str[i];
        char checkedChar[MAXSIZE];
        int charPointer = 0;
        for(int j = 0; j < s.length(); j++) {
            char c = s[j];
            bool isContains = false;
            for(int k = 0; k < charPointer; k++) {
                if(c == checkedChar[k]) {
                    isContains = true;
                    break;
                }
            }
            if(isContains) {
                if(s[j - 1] != c) {
                    isGroupWord = false;
                    break;
                }
            }
            else {
                checkedChar[charPointer++] = c;
            }
        }

        if(isGroupWord) {
            result++;
        }
    }

    cout << result << endl;
}