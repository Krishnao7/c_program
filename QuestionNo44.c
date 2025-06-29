#include <stdio.h>

int main() {
    int n, i, max, index;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    index = 0;

    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    printf("Max element %d found at index %d\n", max, index);

    return 0;
}
