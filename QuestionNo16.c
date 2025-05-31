#include <stdio.h>

int main() {
    int marks[5];
    int i, total = 0;
    float percentage;
    char grade;

    // Input marks
    printf("Enter marks for 5 subjects : ");
    
    
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate percentage
    percentage = (total / 500.0) * 100;

    // Determine grade
    if (percentage < 35)
        grade = 'F';
    else if (percentage < 45)
        grade = 'E';
    else if (percentage < 60)
        grade = 'D';
    else if (percentage < 75)
        grade = 'C';
    else if (percentage < 90)
        grade = 'B';
    else
        grade = 'A';

    // Output result
    printf("Percentage: %.2f%%, Grade: %c\n", percentage, grade);

    return 0;
}
