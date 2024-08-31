// Check whether a number is Armstrong number or not

#include<stdio.h>
// #include<math.h>

int main()
{
    int x,r,n,sum=0;

    printf("Give a number.\n");
    scanf("%d",&x);
    n=x;

    while(x>9)
    {
        r=x%10;
        sum=sum+(r*r*r);

        x=x/10;
    }
    sum=sum+(x*x*x);

    if(sum==n)
    {
        printf("Thenumber is Armstrong.\n");
    }
    else
    {
        printf("The number is not Armstrong.\n");
    }

    return 0;

}