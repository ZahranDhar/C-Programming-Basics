// Demonostrate the use of Macros

#include<stdio.h>
#define AREA(r) PI*r*r
#define PI 3.14
int main(){

    float x;

    printf("What is the radius of circle?\n");
    scanf("%f",&x);

    printf("The area of the circle is %f\n",AREA(x));

    return 0;
    
}