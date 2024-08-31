//Demonstrate the use of string library functions: strlen(), strcpy(), strrev(), strcat(), strcmp() etc. using
//examples.

#include <stdio.h>
#include <string.h>

int main ()
{
    char string1 [10] = "Cat";
    char string2 [10] = "Dog";
    int x;

    printf("String 1 = Cat\n");
    printf("String 1 = Dog\n");

    strlwr(string1);
    printf("String 1 in lowercase is %s\n",string1);

    strupr(string1);
    printf("String 1 in Uppercase is %s\n",string1);

    strcat(string1, string2);
    printf("String 1 and String 2 joined is %s\n",string1);

    strcpy(string1, string2);
    printf("String 2 copied into String 1 is %s\n",string1);

    strset(string1, '!');
    printf("String 1 set to ! is %s\n",string1);

    strrev(string2);
    printf("String 1 reversed is %s\n",string2);

    x = strlen(string2);
    printf("The length of String 1 is %d\n",x);

    return 0;
}