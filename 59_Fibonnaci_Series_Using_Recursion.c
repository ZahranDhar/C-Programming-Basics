//Display Fibonacci series up to n terms using recursion

#include<stdio.h>
int fibo(int x,int y,int n,int i);
int main()
{
    int n;

    printf("Enter the number of terms.\n");
    scanf("%d",&n);

    if(n>=1)
    {
       printf("0 "); 
    }
    if(n>=2)
    {
        printf("1 ");
    }
    if(n>2)
    {
        fibo(0,1,n,3);
    }

    return 0;
}

int fibo(int x,int y,int n,int i)
{
    if(i<=n)
    {
        y=x+y;
        printf("%d ",y);
        x=y-x;

        i++;

        fibo(x,y,n,i);
        
    }
    else
    {
        return 0;
    }
}