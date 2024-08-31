//Find product of series: 1 2 3 4 5 .... n

#include <stdio.h>

int main(){

    int i,n,pro;

    printf("Enter n\n");
    scanf("%d",&n);

    pro=1;
    for (i=1; i<=n; i++)
    {
        pro=pro*i;
    }

    printf("%d",pro);

    return 0;
    
}