 // ============================================================
// PROGRAM: Factorial of a Number
// CONCEPT: Recursion + Ternary Operator
// ============================================================


// 1. HEADER FILE
// ------------------------------------------------------------
// Provides printf() and scanf()
#include <stdio.h>


// 2. FUNCTION DECLARATION / DEFINITION
// ------------------------------------------------------------
// return_type function_name(parameters)
// {
//     statements;
// }

long long factorial(int n)
{
    // Ternary Operator:
    // condition ? expression_if_true : expression_if_false

    return (n <= 1)  ? 1 : n * factorial(n - 1);
}


// 3. MAIN FUNCTION
// ------------------------------------------------------------
// Program execution starts from main()

int main()
{
    // 4. VARIABLE DECLARATION
    int n;


    // 5. INPUT
    // --------------------------------------------------------
    // Ask the user to enter a number.
    printf("Enter Your number: ");

    // Read the number entered by the user.
    scanf("%d", &n);


    // 6. FUNCTION CALL + OUTPUT
    // --------------------------------------------------------
    // factorial(n) calls the recursive function.
    printf("Factorial of %d = %lld\n", n, factorial(n));


    // 7. RETURN STATEMENT
    // --------------------------------------------------------
    // Indicates successful execution.
    return 0;
}