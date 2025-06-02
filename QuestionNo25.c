#include <stdio.h>

int main() {
    int n, sum = 0;
    float average;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate sum from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Calculate average
    average = (float)sum / n;

    // Output
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
