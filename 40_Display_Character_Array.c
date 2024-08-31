//Display contents of a character array.

#include <stdio.h>

int main(){

    int i;
    char arr[7]={'A','B','C','D','E','F','G'};

    i=0;
    while(arr[i]!='\0')
    {
        printf("%c ",arr[i]);
        i++;
    }

    return 0;

}