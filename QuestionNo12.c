#include<stdio.h>

int main(){


    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Hello %s, you are eligible to vote.\n", name);
    } else {
        printf("Hello %s, you will be eligible to vote in %d years.\n", name, 18 - age);
    }

 
    return 0;

}