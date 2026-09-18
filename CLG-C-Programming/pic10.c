// PRACTICAL 10
// Write a C program to generate prime numbers between 1 and n.


#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the upper limit n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    // 1 is not prime, so start from 2
    for (i = 2; i <= n; i++) {
        isPrime = 1;  // assume i is prime
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    printf("\n");

    return 0;
} 