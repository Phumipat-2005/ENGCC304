#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

// ฟังก์ชันหาค่าน้อยที่สุด
int findMin(const vector<int>& arr) {
    int minVal = arr[0];
    for (int val : arr) {
        if (val < minVal) minVal = val;
    }
    return minVal;
}

// ฟังก์ชันหาค่ามากที่สุด
int findMax(const vector<int>& arr) {
    int maxVal = arr[0];
    for (int val : arr) {
        if (val > maxVal) maxVal = val;
    }
    return maxVal;
}

int main() {
    vector<int> arr;
    string input;
    cout << "Enter value:\n";
    getline(cin, input);
    stringstream ss(input);
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }

    cout << "Index: ";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Array: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Min : " << findMin(arr) << endl;
    cout << "Max : " << findMax(arr) << endl;

    return 0;
}