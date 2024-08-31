//Find all the factors of a natural number

#include<stdio.h>

int main()
{
    int x,i;

    printf("Enter a natural number\n");
    scanf("%d",&x);
    printf("The factors are: ");
    for(i=1; i<=x/2; i++)
    {
        if(x%i==0)
        {
            printf("%d, ",i);
        }
    }
    printf("%d.  ",x);

    return 0;

}