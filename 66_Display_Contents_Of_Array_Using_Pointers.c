//Display contents of an array using pointers

#include<stdio.h>

int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *i;

    for(i=&a[0]; i<=&a[9]; i++)
    {
        printf("%d ",*i);
    }

    return 0;

}