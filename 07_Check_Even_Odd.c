//Use if-else to check whether a number is even or odd.

#include <stdio.h>

int main(){

    int x;
    printf("Enter a number to check even odd");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}
