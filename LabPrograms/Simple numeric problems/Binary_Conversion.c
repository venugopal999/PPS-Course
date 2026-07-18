
// Program for Binary Equivalent (0-255)
// Objective: Demonstrate for converting decimal to binary 
// Author: Venu Goapl


#include <stdio.h>

int main() {
    int num;
    printf("Enter a number (0-255): ");
    scanf("%d", &num);

    if(num < 0 || num > 255) {
        printf("Number out of range!\n");
        return 0;
    }
    printf("Binary equivalent: ");
    for(int i = 7; i >= 0; i--) {   // 8 bits for 0-255
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    return 0;
}

