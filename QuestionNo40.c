#include <stdio.h>

int main() {
    int i, j, space, rows = 5;

    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
