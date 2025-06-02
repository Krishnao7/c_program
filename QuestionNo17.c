#include <stdio.h>

int main() {
    double rating;
    char movieName[100];

    // Input
    printf("Enter movie name: ");
    scanf(" %[^\n]", movieName); // reads string with spaces
    printf("Enter rating (0.0 - 5.0): ");
    scanf("%lf", &rating);

    // Output based on rating
    printf("%s is ", movieName);
    
    if (rating >= 0.0 && rating <= 2.0)
        printf("a Flop\n");
    else if (rating > 2.0 && rating <= 3.4)
        printf("a Semi-hit\n");
    else if (rating > 3.4 && rating <= 4.5)
        printf("a Hit\n");
    else if (rating > 4.5 && rating <= 5.0)
        printf("a Super Hit\n");
    else
        printf("an Invalid Rating\n");

    return 0;
}
