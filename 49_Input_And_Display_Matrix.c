//input matrix from the user and display it in matrix form
#include<stdio.h>
int main()
{
    int a[10][10],m,n,i,j;

    printf("Enter the number of rows and columns.\n");
    scanf("%d,%d",&m,&n);

    printf("Enter the elements row by row.\n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        scanf("%d",&a[i][j]);
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        printf("%d ",a[i][j]);
        
        printf("\n");
    }

    return 0;

}