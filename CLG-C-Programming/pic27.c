// PRACTICAL 27
// Write a C program to reverse the elements of an array using pointers. 


#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *start, *end, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    start = arr;            // points to first element
    end = arr + n - 1;      // points to last element

    // Reverse using pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}