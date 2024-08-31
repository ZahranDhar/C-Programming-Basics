//find factorial of a number using recursion

#include<stdio.h>
long int fact(int);
int main()
{
    int n;
    long int ans;
    printf("enter the number:\n");
    scanf("%d",&n);
    ans=fact(n);
    printf("Factorial of %d is %ld",n,ans);
    return 0;
}

long int fact(int n)
{
    if(n>1)
    return n*fact(n-1);
    else 
    return 1;
}