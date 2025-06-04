#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Digits in reverse order: ");
    while (n > 0) {
        digit = n % 10;
        printf("%d ", digit);
        sum += digit;
        n /= 10;
    }

    printf("\nSum of digits: %d\n", sum);
    return 0;
}
