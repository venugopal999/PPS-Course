
// Week - 2: program that finds if a given number is a prime number
// Objective: Demonstrate usage of loops
// Author: Venu Goapl



#include <stdio.h>

int main() {
    int num, i, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                count++;
            }
        }

        if (count == 2) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}

