#include <iostream>
using namespace std;

void swapNumbers(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int num1, num2;
    cout << "Enter num1 :\n";
    cin >> num1;
    cout << "Enter num2 :\n";
    cin >> num2;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    cout << "Before swap (num1 & num2) : " << num1 << ", " << num2 << endl;

    swapNumbers(ptr1, ptr2);

    cout << "After swap (num1 & num2) : " << num1 << ", " << num2 << endl;

    return 0;
}