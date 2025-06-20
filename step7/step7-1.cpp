#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> splitBySpace(string s) {
    string str;
    vector<string> result;
    for(char c : s) {
        if(isspace(c)) {
            if(!str.empty()) {
                result.push_back(str);
                str.clear();
            }
        }
        else {
            str += c;
        }
    }
    if(!str.empty()) {
        result.push_back(str);
    }
    return result;
}

int main() {
    string amount;
    getline(cin, amount);
    vector<string> split = splitBySpace(amount);
    int n = stoi(split.at(0));
    int m = stoi(split.at(1));

    int** maxtrixA = new int*[n];
    int** maxtrixB = new int*[n];

    for(int i = 0; i < n; i++) {
        maxtrixA[i] = new int[m];
        maxtrixB[i] = new int[m];
    }

    for(int i = 0; i < n * 2; i++) {
        string str;
        getline(cin, str);
        vector<string> vs = splitBySpace(str);
        for(int j = 0; j < vs.size(); j++) {
            int num = stoi(vs.at(j));
            if(i < n) {
                maxtrixA[i][j] = num;
            }
            else {
                maxtrixB[i-n][j] = num;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int num = maxtrixA[i][j] + maxtrixB[i][j];
            cout << num;
            if(j != m) {
                cout << " ";
            }
        }
        cout << endl;
    }
}