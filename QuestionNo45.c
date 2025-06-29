#include <stdio.h>

int main() {
    int n, i, isIncreasing = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            isIncreasing = 0;
            break;
        }
    }

    if(isIncreasing)
        printf("Array is in increasing order\n");
    else
        printf("Array is not in increasing order\n");

    return 0;
}
