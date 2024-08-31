//Demonstrate the use of continue and break keywords (in loops).

#include <stdio.h>

int main(){

    int i,n;

    printf("The loop runs from 1 to 100. What number do u want to skip?\n");
    scanf("%d",&n);

    for(i=1; i<=100; i++)
    {
        if(i==n)
        {
            continue;
        }
        else
        {
            printf("%d ",i);
        }
        
    }

    printf("\n\n");

    printf("The loop runs from 1 to 100. Where do you want it to stop?\n");
    scanf("%d",&n);

    for(i=1; i<=100; i++)
    {
        if(i==n+1)
        {
            break;
        }
        else
        {
            printf("%d ",i);
        }
        
    }


    return 0;

}