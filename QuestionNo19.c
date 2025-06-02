#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c to consume any leftover newline

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        switch(ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                printf("Vowel\n");
                break;
            default:
                printf("Consonant\n");
        }
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
