#include <stdio.h>

int main() {
    int n;
    long factorial, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    factorial = 1;
    for(int i = 1; i <= n; ++i) {
        factorial *= i;
        sum += factorial;
    }

    printf("Sum of factorials from 1 to %d = %llu\n", n, sum);
    return 0;
}
