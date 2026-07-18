
// Write a C program to insert a sub-string into a given main string from a given position
// Objective: Demonstrate for strings
// Author: Venu Goapl


#include <stdio.h>
#include <string.h>

void insert_substring(char *str, const char *sub, int pos, int max_size) {
    int len = strlen(str);
    int sublen = strlen(sub);
    if (len + sublen >= max_size) {
        printf("Not enough space to insert substring.\n");
        return;
    }
    char temp[256];   
    strcpy(temp, str + pos);
    strcpy(str + pos, sub); 
    strcpy(str + pos + sublen, temp); 
}
int main() {
char str[100] = "Hello";
    insert_substring(str, "WORLD", 2, sizeof(str));
    printf("%s\n", str);//HeWORLDllo
    return 0;
}
