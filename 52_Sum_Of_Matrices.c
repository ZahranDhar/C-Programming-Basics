//input two matrices from the user and find their sum
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n;
    printf("enter the number of rows and columns: ");
    scanf("%d%d",&m,&n);
    printf("enter the value of first matrix row by row\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    }
    printf("enter the value of second matrix row by row\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
     {
         scanf("%d",&b[i][j]);
     }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
       {
         c[i][j]=a[i][j]+b[i][j];
       }
    }
    printf("the sum of matrices is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
       {
          printf("%d ",c[i][j]);
       }
       printf("\n");
    }
    return 0;



}