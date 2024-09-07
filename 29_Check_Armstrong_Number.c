// Check whether a number is Armstrong number or not

#include<stdio.h>
#include<math.h>

int main()
{
    int x,r,n,l=0,sum=0;

    printf("Give a number.\n");
    scanf("%d",&x);
    n=x;

    while(x!=0)
    {
        l++;
        x=x/10;
    }
    x=n;

    while(x!=0)
    {
        r=x%10;
        sum=sum+pow(r,l);
        x=x/10;
    }

    if(sum==n)
    {
        printf("The number is Armstrong.\n");
    }
    else
    {
        printf("The number is not Armstrong.\n");
    }

    return 0;

}
