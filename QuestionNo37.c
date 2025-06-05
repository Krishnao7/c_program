#include <stdio.h>

int main() {
    char choice;

    do {
        printf("Shery\n");
        printf("Do you want to repeat y/n : ");
        scanf(" %c", &choice);  // Note the space before %c to consume any leftover newline
    } while(choice != 'n');

    return 0;
}
