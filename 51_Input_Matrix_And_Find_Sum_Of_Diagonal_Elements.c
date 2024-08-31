//input matrix from user and find sum of its diagonal elements

#include<stdio.h>
int main()
 { 
    int a[10][10],m,i,j,sum=0;

    printf("Enter the number of rows and columns of the matrix.\n");
    scanf("%d",&m);

    printf("Enter the elements row by row\n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        scanf("%d",&a[i][j]);
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        if(i==j)
        {
            sum=sum+a[i][j];
        }
    }

    printf("The sum of the diagonal elements is: %d",sum);

 }