//. Display the series: 2 4 8 16 32 64 128 ....... (n terms)

#include <stdio.h>
#include <math.h>

int main(){

    int i,n,x;

    printf("Enter n\n");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        x=pow(2,i);
        printf("%d ",x);
    }

    return 0;

}