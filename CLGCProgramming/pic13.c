// PRACTICAL 13
// Write a C program to check whether a given number is a perfect number or not. 


#include <stdio.h>

int main() {
    int num, sum = 0, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Find and add proper divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}