#include <stdio.h>

int main() {
    int n, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Output: ");
    while(n > 0) {
        digit = n % 10;
        printf("%d ", digit);
        sum += digit;
        n /= 10;
    }

    printf("\nSum: %d\n", sum);

    return 0;
}
