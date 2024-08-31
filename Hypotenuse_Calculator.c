//Hypotenuse Calculator

#include<stdio.h>
#include<math.h>

int main()
{
    double h;
    double b;
    double p;

    printf("Base?\n");
    scanf("%lf",&b);

    printf("Perpencicular?\n");
    scanf("%lf",&p);

    h = sqrt(pow(b,2)+pow(p,2));
    printf("Hypotenuse=%lf\n",h);

    return 0;
}