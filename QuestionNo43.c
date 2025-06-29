#include <stdio.h>

int main() {
    int n, i, sum = 0;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Sum: %d, Average: %.2f\n", sum, average);

    return 0;
}
