#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    printf("Enter a word or phrase: ");
    fgets(str, sizeof(str), stdin);

    // ลบ '\n' ที่อาจติดมาจาก fgets
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    int left = 0, right = len - 1;
    int isPalindrome = 1;
    while (left < right) {
        // ข้ามช่องว่าง
        while (str[left] == ' ') left++;
        while (str[right] == ' ') right--;
        if (str[left] != str[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        printf("Pass\n");
    else
        printf("Not Pass\n");
    return 0;
}