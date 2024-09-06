// Read contents of a text file

#include<stdio.h>

int main()
{   
    char  text[100];
    FILE *F= fopen("read.txt","r");

    if(F==NULL)
    {
        printf("Unable to open the file.\n");
    }
    else
    {
        char name[10];
        int age;

        fscanf(F,"%s %d",&name,&age);

        printf("Your name is %s and your age is %d.",name,age);
    
        fclose(F);
    }
    

    return 0;
}
