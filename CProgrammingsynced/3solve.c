//SAMPLE CODE FOR TESTING 
/*
#include <stdio.h>
         int main ()   
{

printf ("THIS IS JUST FOR THE TESTING OF THE GIT HUB REPO , AND MODIFIED 👍️ \n");
      return 0;
}         */


// PRACTICAL 10
// Write a C program to generate prime numbers between 1 and n.
/*
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
}                 */


// PRACTICAL 11
// Write a C program to check whether a given number is an Armstrong number or not. 
/*
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
}                           */


// PRACTICAL 12
// Write a C program to check whether the reverse of a number is the same as the original number, regardless of the number’s length. 
/*
#include <stdio.h>

int main() {
    int num, original, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    if (reverse == original)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}                                */



// PRACTICAL 13
// Write a C program to check whether a given number is a perfect number or not. 
/*
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
}                               */


// PRACTICAL 14
// Write a C program to check whether a given number is a strong number or not.
/*
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
}                                */



// PRACTICAL 15
// Write a C program to perform arithmetic operations using a switch statement. 
/*
#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // space before %c to skip newline
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}                               */



// PRACTICAL 16
// Write a C program that uses a function with a return value to add two numbers.
/*
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
}                             */



// PRACTICAL 17
// Write a C program to calculate the GCD (Greatest common divisor) of two numbers.
/*
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
}                     */



// PRACTICAL 18
// Write a C program to find the factorial of a given integer using a non-recursive function. 
/*
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
}                         */