
// Program to find the minimum, maximum and average in an array of integers.
// Objective: Demonstrate for arrays
// Author: Venu Goapl


#include<stdio.h>
int main() {
int i,n,x,y;
float z; 
printf("enter no.of elements "); 
scanf("%d",&n);
int a[n]; 
for(i=0;i<n;i++) {
printf("\n enter %d value:",i); 
scanf("%d",&a[i]);
}
x=max(a,n);
printf("the largest value is %d",x);
y=small(a,n);
printf("\nthe smallest value is %d",y);
z=average(a,n);
printf("\nthe average value is %.2f",z);
} 
int max(int arr[],int n)
{
int largest,i; 
largest=arr[0]; 
for(i=0;i<n;i++)
{
if(arr[i]>largest)
{
largest=arr[i];
}}
return(largest);
} 
int small(int arr[],int n)
{
int smallest,i; smallest=arr[0]; for(i=0;i<n;i++)
{
if(arr[i]<smallest)
{
smallest=arr[i];
}}
return(smallest);
}
int average(int arr[],int n)
{
	int sum=0,i;
	float avg;
	for(i=0;i<n;i++)
	{
		sum = sum+arr[i];
	}
	avg = sum/n;
	return avg;
}

