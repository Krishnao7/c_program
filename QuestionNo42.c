#include <stdio.h>

int main() {
    int i, j, n = 5;


    if(n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(j == i || j == n - 1 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
