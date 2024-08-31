//Use ternary operator.

#include <stdio.h>

int main()
{
    double x,y;
    printf("Give the two numbers.\n");
    scanf("%lf,%lf",&x,&y);

    (x>y)? printf("%lf",x):printf("%lf",y);

    return 0;
}