#include <stdio.h>

int main() {
    int n, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
