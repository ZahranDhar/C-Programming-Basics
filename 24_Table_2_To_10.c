//Display table of all integers from 2 to 10 (2x1=2, 2x2=4, ……., 10x10=100)

#include<stdio.h>

int main(){

    int i,j;

    for(i=2; i<=10; i++)
    {
        for (j=1; j<=10; j++)
        {
            printf("%d*%d=%d\n",i,j,i*j);
        }

        printf("\n\n");
    }


    return 0;

}