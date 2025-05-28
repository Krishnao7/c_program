#include <stdio.h>
#include <math.h>

int main() {
   
    double principal, amount,rate, time, compoundInterest;
   

    // Take user input for principal, rate, and time
    printf("Enter principal amount: ");
    scanf("%lf", &principal);
    printf("Enter rate of interest: ");
    scanf("%lf", &rate);
    printf("Enter time period (in years): ");
    scanf("%lf", &time);

    // Calculate compound interest
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Print the compound interest
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}
