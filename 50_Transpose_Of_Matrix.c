//Find transpose of a matrix.

#include<stdio.h>

int main()
{
    int a[2][3]={{2,3,5},{4,1,8}};
    int b[3][2];
    int i,j;

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            b[j][i]=a[i][j];
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}