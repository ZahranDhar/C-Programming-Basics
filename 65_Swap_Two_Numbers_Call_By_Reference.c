//Swap two numbers using functions (call-by-reference method).

#include<stdio.h>

int main()
{
    int x,y;

    printf("Give two numbers to swap\n");
    scanf("%d,%d",&x,&y);

    swap(&x,&y);

    printf("%d,%d",x,y);
}

void swap(int *x, int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;

    return 0;
}
