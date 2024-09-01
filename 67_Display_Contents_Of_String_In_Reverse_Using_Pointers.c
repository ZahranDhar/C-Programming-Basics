//Display contents of a string in reverse order using pointers.

#include<stdio.h>

int main()
{
    char name[10]="Zahran";
    char *s=&name[0];
    char *e=s;
    char *i;

    while(*e!='\0')
    {
        e++;
    }
    e--;
    for(i=e; i>=s; i--)
    {
        printf("%c",*i);
    }

    return 0;

}