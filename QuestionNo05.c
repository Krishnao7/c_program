#include<stdio.h>

int main(){

      int hours, minutes;

    printf("Enter number of hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;

    printf("%d minutes in %d hours\n", minutes, hours);
}