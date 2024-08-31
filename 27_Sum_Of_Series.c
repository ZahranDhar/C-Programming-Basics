//Find sum of series: 1 + 1/2 + 1/4 + 1/6 + ….+ 1/n

#include<stdio.h>

int main(){

    int i,n,j=2;
    float x=1;

    printf("Enter number of terms.\n");
    scanf("%d",&n);

    if (n==1)
    {
        printf("The sum is 1");
    }
    else
    {
        for(i=1; i<=n-1; i++)
    {
        x=x+(1.0/j);
        j=j+2;
    }

        printf("The sum is %f",x); 

    }


    return 0;

}
