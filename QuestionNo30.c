#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors: ");
    for (i = 1; i <= n; ++i) {
        if (n % i == 0) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum of factors: %d\n", sum);
    return 0;
}
