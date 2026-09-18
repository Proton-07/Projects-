// PRACTICAL 18
// Write a C program to find the factorial of a given integer using a non-recursive function. 


#include <stdio.h>

// Non-recursive (iterative) function to compute factorial
long long factorial(int n) {
    if (n < 0)
        return -1;   // error indicator for negative input
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
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