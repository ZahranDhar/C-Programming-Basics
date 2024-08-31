//Temperature Conversion Program

#include<stdio.h>
#include<math.h>

int main()
{
    float temp;
    char unit;

    printf("Is the temp is C or F?\n");
    scanf("%c",&unit);
    unit = toupper(unit);
    getchar();

    printf("What is the value of temp?\n");
    scanf("%f",&temp);

    if(unit == 'C')
    {
        temp = (temp*9/5)+32;
        printf("The temp in F is %0.2f\n",temp);
    }
    else if(unit == 'F')
    {
        temp = (temp-32)*5/9;
        printf("The temp in C is %0.2f\n",temp);
    
    }
    else
    {
        printf("The value is not defined\n");
    }

    return 0;
}