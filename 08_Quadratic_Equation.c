//Find roots of a quadratic equation.

#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    printf("Give 3 coefficients\n");
    scanf("%lf,%lf,%lf",&a,&b,&c);

    if (a==0)
    {
        printf("This quadratic equation does not exist");
    }
    else
    {
        double D = (b*b)-4*a*c;

    if (D>=0)
    {
        double R1 = -b+sqrt(D)/2*a;
        double R2 = -b-sqrt(D)/2*a;
        if(R1==R2)
        {
            printf("The roots are same and the value is %.2lf\n",R1);
        }
        else
        {
            printf("The roots are different and the values are %0.2lf and %0.2lf.",R1,R2);
        }
    }
    else
    {
        double realpart1 = -b/2*a;
        double imgpart1 = sqrt(-D)/2*a;

        double realpart2 = -b/2*a;
        double imgpart2 = sqrt(-D);

        printf("The roots are %0.2lf + %0.2lfi and %0.2lf - %0.2lfi.",realpart1,imgpart1,realpart2,imgpart2);

    }
    }
    
    return 0;
}