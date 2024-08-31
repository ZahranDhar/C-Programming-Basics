//Circumference and Raduis Calculator

#include<stdio.h>
#include<math.h>

int main(){

    const double pi = 3.14;
    double r;
    double c;
    double a;

    printf("What is the raduis of circle?\n");
    scanf("%lf",&r);
    c = 2*pi*r;
    a = pi*pow(r,2);
    printf("The Circumferance of the circle is %lf.\n",c);
    printf("The Area of the circle is %lf\n.",a);


    return 0;
}