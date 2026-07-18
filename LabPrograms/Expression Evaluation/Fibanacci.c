// Week - 2: A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1. 
//Subsequent terms are found by adding the preceding two terms in the sequence. Program to generate the first n terms of the sequence.
// Objective: Demonstrate usage of loops
// Author: Venu Goapl



#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Sequence (%d terms):\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", first);

        next = first + second;

        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

