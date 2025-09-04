#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from %d to 1:\n", n);
    int i = n;
    do {
        if (isPrime(i)) {
            printf("%d ", i);
        }
        i--;
    } while (i >= 2);
    printf("\n");
    return 0;
}