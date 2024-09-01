//Use if-else with relational and logical operators (grading according to percentage of a student).

#include <stdio.h>

int main()
{
    double MO;
    double MM;
    double PA;
    char grade;
    printf("Enter the marks obtained:\n");
    scanf("%lf",&MO);

    printf("Enter the maximum marks:\n");
    scanf("%lf",&MM);

    if(MO>MM)
    {
        printf("Marks obtained can not be greater than maximum marks.\n");
    }
    else
    {
        PA = (MO/MM)*100;

        if(PA>=90)
        {
            grade = 'A';
        }
        else if(PA>=80)
        {
            grade = 'B';
        }
        else if(PA>=70)
        {
            grade = 'C';
        }
        else if(PA>=60)
        {
            grade = 'C';
        }
        else if(PA>=50)
        {
            grade = 'D';
        }
        else if(PA>=40)
        {
            grade = 'E';
        }
        else
        {
            grade = 'F';
        }

    }

    printf("The percentage is %.2lf.\n",PA);
    printf("The grade is %c.",grade);

    return 0 ;
}
