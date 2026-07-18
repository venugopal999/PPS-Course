
// Write a C program to count the lines, words and characters in a given text.
// Objective: Demonstrate for strings
// Author: Venu Goapl


#include <stdio.h>
#include <ctype.h>
int main() {
    int lines = 0, words = 0, chars = 0;
    int c, in_word = 0;
    printf("Enter text (press Ctrl+D on Linux/Mac or Ctrl+Z on Windows to finish):\n");
    while ((c = getchar()) != EOF) {
        chars++;                    
        if (c == '\n')
            lines++;                
        if (isspace(c)) {
            in_word = 0;            
        } else if (!in_word) {
            in_word = 1;            
            words++;
        }
    }
    printf("\nLines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", chars);

    return 0;
}

