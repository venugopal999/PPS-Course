
//C program that implements the Bubble sort method to sort a given list of integers in ascending order.
// Objective: Demonstrate Bubble sort Technique
// Author: Venu Goapl


#include<stdio.h>
int main()
{
int a[10],i,j,n,temp;
printf("enter the size of an array ");
scanf("%d",&n);	
for(i=0;i<n;i++)
{
	printf("enter the %d position element ",i);
	scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
	int swapped = 0; 	
	for(j=0;j<n-1-i;j++)
	{
		if(a[j]>a[j+1])
		{
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
			swapped = 1;
		}	
	}
if (!swapped)     
 	break; 	
}
printf("sorted elements are:");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
return 0; 
}

