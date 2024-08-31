//add and subtract two numbers using functions(a+b,a-b,b-a)
#include<stdio.h>
int add(int,int);
int subtract(int,int);
int main()
{
    int a,b;
    printf("enter two integers:\n");
    scanf("%d%d",&a,&b);
    add(a,b);
    subtract(a,b);
    return 0;
}

int add(int a, int b)
{
    int c;
    c=a+b;
    printf("%d+%d=%d\n", a,b,c);
    return 0;
}

int subtract(int a, int b)
{
    int c,d;
    c=a-b;
    d=b-a;
    printf("%d-%d=%d\n",a,b,c);
    printf("%d-%d=%d",b,a,d);
    return 0;
}