//Display contents of a string in reverse order using pointers.

#include<stdio.h>

int main()
{
    char *s= "Zahran";    
    char *e=s;

    while(*e!='\0')
    {
        e++;
    }
    e--;
    while(e>=s)
    {
        printf("%c",*e);
        e--;
    }

    return 0;

}
