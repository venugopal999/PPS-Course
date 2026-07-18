
// Write a program for display values reverse order from an array using a pointer 
// Objective: Demonstrate usage of pointers
// Author: Venu Goapl

#include <stdio.h> 
void printArray(int *p, int size); 
int main() { 
int size,i; 
printf("enter array size\n"); 
scanf("%d",&size); 
int a[size]; 
int n = sizeof(a) / sizeof(a[0]);  
printf("\n Enter array elements\n"); 
for(i=0;i<size;i++) 
scanf("%d",&a[i]); 
printf("array elements arer\n"); 
for(i=0;i<size;i++) 
printf("%d ",a[i]); 
printArray(a+(n-1),size); 
return 0; 
} 
void printArray(int *p, int size) { 
int i; 
printf("\n Elements of the array:\n "); 
for (i = 0; i < size; i++) { 
printf("%d ", *p); 
p--; 
} 
printf("\n"); 
}
