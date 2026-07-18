
// Program for reading elements using a pointer into an array and display the values using the array 
// Objective: Demonstrate usage of pointers
// Author: Venu Goapl


#include <stdio.h> 
void printArray(int *arr, int size); 
int main() { 
int size,i; 
printf("enter array size\n"); 
scanf("%d",&size); 
int a[size]; 
printf("\n Enter array elements\n"); 
for(i=0;i<size;i++) 
scanf("%d",&a[i]); 
printArray(a,size); 
return 0; 
} 
void printArray(int *p, int size) { 
int i; 
printf("Elements of the array: "); 
for (i = 0; i < size; i++) { 
printf("%d ", *p); 
p++; 
} 
printf("\n"); 
} 
