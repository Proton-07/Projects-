//                               PRACTICALS FROM ( 10 - 27 ) 

// UNCOMMENT FOR THE CODE RUN 

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




// PRACTICAL 19
// Write a C program to find the factorial of a given integer using a recursive function.

/*
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
}                              */




// PRACTICAL 20
// Write a C program to display array elements.

/*
#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}                            */




// PRACTICAL 21
// Write a C program to find both the largest and smallest numbers in a list of integers.

/*
#include <stdio.h>

int main() {
    int arr[100], n, i, largest, smallest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}                           */



// PRACTICAL 22
// Write a C program to insert an element in an array at a specific index.

/*
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, element;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (0-based) to insert: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}                                       */




// PRACTICAL 23
// Write a C program to search for a given element using linear search.

/*
#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d (index %d).\n", key, i + 1, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Element %d not found in the array.\n", key);

    return 0;
}                                 */




// PRACTICAL 24
// Write a C program to find the length of a string using a pointer and library function.

/*
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
}                                     */




// PRACTICAL 25
// Write a C program to swap two numbers using pointers.

/*
#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);  // pass addresses

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}                                        */




// PRACTICAL 26
// Write a C program to access array elements using pointers instead of indexing.

/*
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;  // ptr points to the first element

    printf("Array elements using pointer arithmetic: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));  // equivalent to arr[i]
    }
    printf("\n");

    return 0;
}                                     */




// PRACTICAL 27
// Write a C program to reverse the elements of an array using pointers. 


#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *start, *end, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    start = arr;            // points to first element
    end = arr + n - 1;      // points to last element

    // Reverse using pointers
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}





//                                     - END OF THIS FILE -
