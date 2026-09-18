// PRACTICAL 24
// Write a C program to find the length of a string using a pointer and library function.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // reads including newline

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    // Method 1: Using pointer
    ptr = str;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    // Method 2: Using library function
    int lib_length = strlen(str);

    printf("Length using pointer: %d\n", length);
    printf("Length using strlen(): %d\n", lib_length);

    return 0;
}