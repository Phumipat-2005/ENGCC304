#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;
    int temp = num;

    // นับจำนวนหลัก
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    // คำนวณผลรวมของเลขยกกำลังจำนวนหลัก
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("Pass\n");
    else
        printf("Not Pass\n");

    return 0;
}