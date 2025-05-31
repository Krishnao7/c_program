#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter first numbers: ");
    scanf("%d", &a);

     printf("Enter second numbers: ");
    scanf("%d", &b);

     printf("Enter thard numbers: ");
    scanf("%d", &c);

    if (a >= b && a >= c)
        printf("Largest: %d\n", a);
    else if (b >= a && b >= c)
        printf("Largest: %d\n", b);
    else
        printf("Largest: %d\n", c);

        return 0;
}