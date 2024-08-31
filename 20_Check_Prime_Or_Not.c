//Check whether a number is prime or not.

#include <stdio.h>

int main(){

    int i,n,flag;

    printf("Enter a number to check if prime.\n");
    scanf("%d",&n);

    if(n<=1)
    {
        flag=0;
    }
    else
    {
        for(int i = 2; i<n/2; i++)
    {
       if(n%i!=0)
       {
        flag=0;
       }
       else
       {
        flag =1;
        break;
       }
    }
    }

    if(flag==0)
    {
        printf("The number is prime.\n");
    }
    else
    {
        printf("The number is not prime.\n");
    }


    return 0;

}