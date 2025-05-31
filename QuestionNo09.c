#include<stdio.h>

int main(){

     int a, b;

    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    if (a > b) {
        printf("Grater number is:%d\n", a);
    } else {
        printf(" Grater number is:%d\n", b);
    }
return 0 ;

}