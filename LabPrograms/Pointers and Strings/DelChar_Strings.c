
// Write a C program to delete n Characters from a given position in a given string
// Objective: Demonstrate for strings
// Author: Venu Goapl


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int pos, n;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    printf("Enter position to delete from (starting at 0): ");
    scanf("%d", &pos);

    printf("Enter number of characters to delete: ");
    scanf("%d", &n);

    int len = strlen(str);

    if (pos < 0 || pos >= len) {
        printf("Invalid position!\n");
    } else if (pos + n > len) {
        printf("Cannot delete beyond string length!\n");
    } else {
        // Shift characters to the left
        for (int i = pos; i <= len - n; i++) {
            str[i] = str[i + n];
        }
        printf("Resulting string: %s\n", str);
    }

    return 0;
}

