#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, result = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate sum of digits raised to the power of digits
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    // Check if Armstrong
    if (result == original)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
