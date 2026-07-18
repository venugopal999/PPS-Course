
// Write a C program to determine if the given string is a palindrome or not 
// Objective: Demonstrate for strings
// Author: Venu Goapl

#include <stdio.h> 
#include<string.h> 
int main() { 
char str1[100],str2[100]; 
printf("Enter string one\n"); 
scanf("%[^\n]s",str1); 
printf("Entered string is : %s",str1); 
strcpy(str2,str1); 
printf("\n %s",str2); 
strrev(str1); 
printf("reversed string is : %s",str1); 
if(strcmp(str1,str2)) 
printf("Given string is palindrome"); 
else 
printf("Given string is not  palindrome"); 
return 0; 
}
