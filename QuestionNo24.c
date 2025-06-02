#include <stdio.h>
#include <math.h>

int main() {
    int n, original, sum = 0, digits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits); // each digit raised to the power of number of digits
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
