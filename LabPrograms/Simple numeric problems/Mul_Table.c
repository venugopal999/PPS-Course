
// Program for Multiplication Table
// Objective: Demonstrate for printing Multiplication Table for any number 
// Author: Venu Goapl



#include <stdio.h>

int main() {
    int num, rows;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

