
// Program to find the sum of individual digits of a positive integer and test given number is palindrome.
// Objective: Demonstrate usage of loops
// Author: Venu Goapl


#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    original = num;  

    while (num > 0) {
        digit = num % 10;
        sum += digit;                 
        reversed = reversed * 10 + digit;  
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}

