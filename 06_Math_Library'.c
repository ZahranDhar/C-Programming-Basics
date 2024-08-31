//Use math library (pow(), sqrt(), etc.).

#include <stdio.h>
#include <math.h>

int main()
{
    //Sqrt
    double A;
    A = sqrt(9);
    printf("The sq root of 9 is %lf\n",A);

    //pow
    double B;
    B = pow(2,3);
    printf("The power of 2 to 3 is %lf\n",B);

    //round
    int C;
    C = round(3.33);     //Round to up/low
    printf("The round off (low/up) of 3.33 is %d\n",C);

    //ceil
    C = ceil(3.44);     //Round to up
    printf("The rounf off (up) 3.44 is %d\n",C);

    //floor
    C = floor(2.99);     //Round to low
    printf("The rounf off (down) 2.99 is %d\n",C);

    //fabs
    double D;
    D = fabs(-100);     //Modulus
    printf("The Mod of -100 is %lf\n",D);

    //log
    double E;
    E = log(10);
    printf("The log of 10 is %lf\n",E);

    //sin
    double F;
    F = sin(45);     //For various trigonometric functions
    printf("The sin of 45 is %lf\n",F);

    return 0;
}