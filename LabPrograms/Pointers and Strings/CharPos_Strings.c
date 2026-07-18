
// Write a C program that displays the position of a character ch in the string S or - 1 if S doesn't contain ch.
// Objective: Demonstrate for strings
// Author: Venu Goapl


#include <stdio.h> 
#include <string.h>
int main() 
{
    char S[200];
    char ch;
    int i, position = -1;
    printf("Enter a string: ");
    fgets(S, sizeof(S), stdin); 
    printf("Enter a character to find: ");
    scanf("%c", &ch);
    for (i = 0; S[i] != '\0'; i++) {
        if (S[i] == ch) {
            position = i; 
            break;
        }    }
    printf("%d\n", position);
    return 0;}

