#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int getIntOfAlphabet(char c) {
    int num = 0;
    char alphabet[36] = { '0', '1', '2', '3', '4', '5', '6', '7', 
                        '8','9', 'A', 'B', 'C', 'D', 'E', 'F', 
                        'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 
                        'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 
                        'W', 'X', 'Y', 'Z'};
    for(int i = 0; i < 36; i++) {
        if(c == alphabet[i]) {
            num = i;
            break;
        }
    }
    return num;
}

int main() {
    string input, split;
    getline(cin, input);
    istringstream ss(input);
    int pointer = 0;
    int numeral;
    string num;
    int result = 0;
    while(ss >> split) {
        if(pointer == 0) {
            num = split;
            pointer++;
        }
        else {
            numeral = stoi(split);
        }
    }

    for(int i = 0; i < num.length(); i++) {
        int exponent = (num.length() - 1) - i;
        int base = 1;
        for(int e = 0; e < exponent; e++) {
            base *= numeral;
        }
        result += getIntOfAlphabet(num.at(i)) * base;
    }
    cout << result << endl;
    return 0;
}