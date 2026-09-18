// PRACTICAL 26
// Write a C program to access array elements using pointers instead of indexing.


#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;  // ptr points to the first element

    printf("Array elements using pointer arithmetic: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));  // equivalent to arr[i]
    }
    printf("\n");

    return 0;
}