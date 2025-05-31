#include<stdio.h>

int main(){


     int m;

    printf("Enter a number: ");
    scanf("%d", &m);

    if (m > 0) {
        printf("Positive\n");
    } else if (m < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
 return 0;
 
}