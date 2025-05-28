#include<stdio.h>

int main(){

    
    int  x, n;
    int result;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter power (n): ");
    scanf("%d", &n);

    result = pow(x, n);

    printf("%d\n", result);

    return 0;
}