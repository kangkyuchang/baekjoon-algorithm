#include <iostream>
#include <vector>

using namespace std;
vector<int> vec;
vector<int> temp;

vector<int> quickSort(int n, vector<int> vec) { 
    if(n <= 1)
        return vec;
    int pivot = n/2;
    int pivotNum = vec.at(pivot);

    vector<int> left, right, equal;
    equal.push_back(pivotNum);
    int i = 0;
    int j = n-1;
    while(true) {
        int num1 = vec.at(i);
        int num2 = vec.at(j);
        if(num1 < pivotNum) {
            left.push_back(num1);
            i++;
        }
        else if(num1 > pivotNum) {
            right.push_back(num1);
            i++;
        }
        if(num2 < pivotNum) {
            left.push_back(num2);
            j--;
        }
        else if(num2 > pivotNum) {
            right.push_back(num2);
            j--;
        }
        if(i == pivot && j == pivot)
            break;
    }

    vector<int> sortedLeft = quickSort(left.size(), left);
    vector<int> sortedRight = quickSort(right.size(), right);
    sortedLeft.insert(sortedLeft.end(), equal.begin(), equal.end());
    sortedLeft.insert(sortedLeft.end(), sortedRight.begin(), sortedRight.end());
    return sortedLeft;
}

void mergeSort(int startIndex, int endIndex) {
    int n = endIndex - startIndex;
    if(n <= 1)
        return;
    int mid = startIndex + (n / 2);
    mergeSort(startIndex, mid);
    mergeSort(mid, endIndex);
    int i = startIndex;
    int j = mid;
    int k = startIndex;
    while(i < mid && j < endIndex) {
        int l = vec.at(i);
        int r = vec.at(j);
        if(l < r) {
            temp.at(k) = l;
            i++;
        }
        else {
            temp.at(k) = r;
            j++;
        }
        k++;
    }
    while (i < mid) temp.at(k++) = vec.at(i++);
    while (j < endIndex) temp.at(k++) = vec.at(j++);

    for(int l = startIndex; l < endIndex; l++) {
        vec.at(l) = temp.at(l);
    }
}

int main() {
    int n;
    cin >> n;

    temp.resize(n);
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;

        vec.push_back(input);
    }

    mergeSort(0, n);

    for(int num : vec) {
        cout << num << endl;
    }

    return 0;
}