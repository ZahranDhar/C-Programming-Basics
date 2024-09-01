// Read contents of a text file

#include<stdio.h>

int main()
{   
    char  text[100];
    FILE *F= fopen("read.txt","r");

    while((fgets(text,100,F))!=NULL)
    {
        printf("%s",text);
    }
    
    fclose(F);
    
    return 0;
}