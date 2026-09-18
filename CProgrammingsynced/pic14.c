// PRACTICAL 14
// Write a C program to check whether a given number is a strong number or not.


#include <stdio.h>

// Function to compute factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, original, sum = 0, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == original)
        printf("%d is a strong number.\n", original);
    else
        printf("%d is not a strong number.\n", original);

    return 0;
}