//Input a string from the user and find its length (without using the string library).

#include <stdio.h>

int main(){

    int i;
    char name[100];

    printf("Enter your name\n");
    scanf("%s",name);

    i=0;
    while(name[i]!='\0')
    {
        i++;
    }

    printf("%d",i);

    return 0;

}