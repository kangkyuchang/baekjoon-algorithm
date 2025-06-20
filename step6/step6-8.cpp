#include <iostream>
#include <string>
#include <vector>
#include <map>

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
    const int n = 20;
    float sum = 0.0;
    float totalCredit = 0.0;
    map<string, float> scores;
    scores["A+"] = 4.5;
    scores["A0"] = 4.0;
    scores["B+"] = 3.5;
    scores["B0"] = 3.0;
    scores["C+"] = 2.5;
    scores["C0"] = 2.0;
    scores["D+"] = 1.5;
    scores["D0"] = 1.0;
    scores["F"] = 0.0;
    for(int i = 0; i < n; i++) {
        string str;
        getline(cin, str);
        vector<string> v = splitBySpace(str);
        float credit = stof(v.at(1));
        string grade = v.at(2);
        if(grade != "P") {
            sum += credit * scores[grade];
            totalCredit += credit;
        }
    }
    float result = sum / totalCredit;
    cout << result << endl;
}