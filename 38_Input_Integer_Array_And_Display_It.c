//Input an integer array from the user and display the same

#include <stdio.h>

int main(){

    int i, arr[10];

    for(i=0; i<=9; i++)
    {
        printf("Enter an element\n");
        scanf("%d",&arr[i]);
    }
    i=0;
    printf("The elements are:\n");
    for(i=0; i<=9; i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;

}