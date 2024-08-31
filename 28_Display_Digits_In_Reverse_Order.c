//Display the digits of any natural number in reverse order. [Use while loop]

#include <stdio.h>

int main(){

    int n,i,x;

    printf("Enter n\n");
    scanf("%d",&n);

    while (n>9)
    {
        x=n%10;
        printf("%d",x);

        n=n/10;
    }

    printf("%d",n);

    return 0;

}