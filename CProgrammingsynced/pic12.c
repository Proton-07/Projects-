// PRACTICAL 12
// Write a C program to check whether the reverse of a number is the same as the original number, regardless of the number’s length. 


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
}