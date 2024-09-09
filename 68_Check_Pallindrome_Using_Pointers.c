// Check if a string is palindrome or not using pointers.

#include<stdio.h>

int main()
{
    char str[10];
    char *s=&str[0];
    char *e=s;         //*e=str[n-1], where n is the length of the string if it is known.

    printf("Enter a String to check pallindrome.\n");
    scanf("%s",&str);

    while(*e!='\0')
    {
        e++;
    }
    e--;
    while(*s==*e)
    {
        if(s<e)
        {
            s++;
            e--;
        }
        else
        {
            printf("The String is Pallindrome.\n");
            return 0; 
        }

    }

    printf("The string is not Pallindrome.\n");
    return 0;

}
