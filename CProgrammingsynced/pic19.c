// PRACTICAL 19
// Write a C program to find the factorial of a given integer using a recursive function.


#include <stdio.h>

// Recursive function to compute factorial
long long factorial(int n) {
    if (n < 0)
        return -1;              // error indicator for negative input
    if (n == 0 || n == 1)
        return 1;               // base case
    return n * factorial(n - 1); // recursive call
}

int main() {
    int num;
    long long result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    result = factorial(num);

    if (result == -1)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("%d! = %lld\n", num, result);

    return 0;
}