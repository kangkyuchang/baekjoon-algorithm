#include <iostream>
#include <string>

using namespace std;

char getAlphabetOfInt(int i) {
    char alphabet[36] = { '0', '1', '2', '3', '4', '5', '6', '7', 
                        '8','9', 'A', 'B', 'C', 'D', 'E', 'F', 
                        'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 
                        'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 
                        'W', 'X', 'Y', 'Z' };
    return alphabet[i];
}

int main() {
    int number = 0, numeral = 0;
    cin >> number >> numeral;
    string result;
    
    while(number > 0) {
        int remain = number % numeral;
        number /= numeral;

        char c = getAlphabetOfInt(remain);
        result = c + result;
    }
    cout << result << endl;
    return 0;
}