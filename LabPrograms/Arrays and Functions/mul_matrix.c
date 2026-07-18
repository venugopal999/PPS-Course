
// Week - 2: Multiplication of Two Matrices
// Objective: Demonstrate the usage of Arrays
// Author: Venu Goapl


#include<stdio.h> 
int main()
{
int a[100][100],b[100][100],c[100][100];
int i,j,k,n,m;
printf("enter the row size,column size(<100): "); 
scanf("%d%d",&n,&m);
printf("enter the matrix a\n"); 
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("a[%d][%d]: ",i,j);
scanf("%d",&a[i][j]);
}
}
printf("enter matrix b\n"); 
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("b[%d][%d]: ",i,j);
scanf("%d",&b[i][j]);
}    
}
printf("MATRIX a*MATRIX b\n"); 
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{ 
c[i][j]=0;
for(k=0;k<n;k++) 
{ 
c[i][j]=c[i][j]+(a[i][k]*b[k][j]); 
} 
} 
} 
printf("Resultant matrix is\n"); 
for(i=0;i<n;i++) 
{ 
for(j=0;j<m;j++) 
{ 
printf("%d\t",c[i][j]); 
}
printf("\n"); 
}   
return 0;  
} 
