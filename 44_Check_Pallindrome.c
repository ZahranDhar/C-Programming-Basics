//Check whether a string is palindrome or not.

#include <stdio.h>

int main(){

    int i,j,k;
    char str[100], revstr[100];

    printf("Enter a string\n");
    scanf("%s",str);

    i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    
    i--;
    for(j=(i); j>=0; j--)
    {
        revstr[(i-j)]=str[j];
    }

    for(j=0; j<=i; j++)
    {
        if(str[j]==revstr[j])
        {
            k=1;
        }
        else
        {
            k=0;
            break;
        }
    }

    if(k==1)
    {
        printf("The string is a pallindrome");
    }
    else
    {
        printf("The string is not a pallindrome");
    }

    return 0;    

}