// PRACTICAL 11
// Write a C program to check whether a given number is an Armstrong number or not. 


#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, sum = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Count number of digits
    while (num != 0) {
        num /= 10;
        n++;
    }

    num = original; // reset

    // Compute sum of digits raised to power n
    while (num != 0) {
        remainder = num % 10;
        sum += pow(remainder, n);
        num /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}