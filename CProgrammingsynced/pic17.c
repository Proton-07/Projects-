// PRACTICAL 17
// Write a C program to calculate the GCD (Greatest common divisor) of two numbers.


#include <stdio.h>

// Function to compute GCD using Euclidean algorithm (iterative)
int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, result;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    result = gcd(num1, num2);

    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}