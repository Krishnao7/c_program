#include <stdio.h>

// Function to calculate sum of digits
int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;

    // Repeat sum of digits until result is a single digit
    while(temp >= 10) {
        temp = sumOfDigits(temp);
    }

    if(temp == 1)
        printf("Special Number\n");
    else
        printf("Not a Special Number\n");

    return 0;
}
