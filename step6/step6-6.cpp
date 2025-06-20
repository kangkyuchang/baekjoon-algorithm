#include <string>
#include <iostream>

using namespace std;

int main() {
    string alphabet[10] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    string str;
    int result = 0;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++) {
        string s;
        s += str[i];
        result++;
        for(int j = i + 1; j <= i+2; j++) {
            if(j >= str.length()) {
                break;
            }
            s += str[j];
            for(int k = 0; k < sizeof(alphabet) / sizeof(alphabet[0]); k++) {
                if(alphabet[k] == s) {
                    i += j - i;
                    break;
                }
            }
        }
    }
    cout << result << endl;
    return 0;
}