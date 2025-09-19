#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;
    int sum = 0;
    int digits = 0;
    int temp = n;

    // นับจำนวนหลัก
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    // คำนวณผลรวมของเลขยกกำลังจำนวนหลัก
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("Pass\n");
    else
        printf("Not Pass\n");

    return 0;
}