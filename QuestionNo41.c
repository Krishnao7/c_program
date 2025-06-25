#include <stdio.h>

int main() {
    int i, j, n = 5;

    if(n <= 3) {
        printf("n must be greater than 3.\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < 2 * n - 1; j++) {
            if(j == i || j == 2 * n - 2 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
