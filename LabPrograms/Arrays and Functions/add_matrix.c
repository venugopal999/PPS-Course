
// Week - 2: I.	Addition of Two Matrices
// Objective: Demonstrate the usage of Arrays
// Author: Venu Goapl


#include<stdio.h> 
int main()
{
int a[100][100],b[100][100],c[100][100];
int i,j,n,m;
printf("enter row size of the matrix(<100)"); 
scanf("%d",&n);
printf("enter column size of the matrix(<100)"); 
scanf("%d",&m);
printf("enter the matrix a\n"); 
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("a[%d][%d]: ",i,j);
scanf("%d",&a[i][j]);
}  }
printf("enter the matrix b\n"); 
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
	printf("b[%d][%d]: ",i,j);
scanf("%d",&b[i][j]);
}     }
printf("MATRIX a+MATRIX b");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
printf("addition of two matrices is\n"); 
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

