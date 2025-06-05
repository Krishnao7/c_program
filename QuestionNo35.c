#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;
    for(int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        remainder = n % 10;
        sum += factorial(remainder);
        n /= 10;
    }

    if(sum == original)
        printf("Strong Number\n");
    else
        printf("Not a Strong Number\n");

    return 0;
}
