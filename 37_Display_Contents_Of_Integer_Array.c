//Display contents of an integer array.

#include <stdio.h>

int main(){

    int i, arr[10]= {1,2,3,4,5,6,7,8,9,10};

    for(i=0; i<=9; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}