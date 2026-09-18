// PRACTICAL 16
// Write a C program that uses a function with a return value to add two numbers.


#include <stdio.h>

// Function definition with return value
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    result = add(num1, num2);

    printf("Sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}