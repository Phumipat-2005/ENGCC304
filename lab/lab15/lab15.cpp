#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countWords(const string& filename) {
    ifstream file(filename);
    if (!file) return 0;

    int count = 0;
    string word;
    while (file >> word) {
        count++;
    }
    file.close();
    return count;
}

int main() {
    string filename = "68.txt";
    int wordCount = countWords(filename);
    cout << "จำนวนคำในไฟล์ " << filename << " คือ " << wordCount << endl;
    return 0;
}