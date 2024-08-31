//Swap two numbers.

#include <stdio.h>

int main(){

    int x,y,z;

    printf("Enter the two numbers to swap\n");
    scanf("%d,%d",&x,&y);

    z=x;
    x=y;
    y=z;

    printf("The numbers swapped are %d, %d\n",x,y);

    return 0;
    
}