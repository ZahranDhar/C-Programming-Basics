// Input a string from the user and display the same.

#include <stdio.h>

int main(){

    int i;
    char name[100];

    printf("Enter your name\n");
    scanf("%s",name);

    i=0;
    while(name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }

    return 0;

}