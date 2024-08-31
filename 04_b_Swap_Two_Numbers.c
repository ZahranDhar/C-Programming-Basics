//Swap two numbers without sung third variable 

#include <stdio.h>

int main(){

    int x,y;

    printf("Enter the two numbers to swap\n");
    scanf("%d,%d",&x,&y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf("The numbers swapped are %d, %d",x,y);

    return 0;
    
}