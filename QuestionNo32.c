#include <stdio.h>

int main() {
    int n, reversed = 0, original, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while(n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if(original == reversed)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    return 0;
}
