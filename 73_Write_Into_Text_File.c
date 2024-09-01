//Write into a text file

#include<stdio.h>

int main()
{
    FILE *F=fopen("write.txt","w");
    int i;

    for(i=1; i<=10; i++)
    {
        fprintf(F,"%d\n",i);
    }

    fclose(F);

    return 0;

}