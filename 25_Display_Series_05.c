//Display the series: 1 2 2 3 3 3 4 4 4 4 ....... (up to n) [nesting of loops]

#include<stdio.h>

int main(){

    int i,j,n;

    printf("Enter n\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        printf("%d ",j);
    }

    return 0;

}