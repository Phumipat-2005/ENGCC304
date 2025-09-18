#include <stdio.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter value[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Result: ");
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int isPrime = 1;
        if (num < 2) isPrime = 0;
        for (int j = 2; j < num; j++) {
            if (num % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", num);
        else
            printf("# ");
    }
    printf("\n");
    return 0;
}