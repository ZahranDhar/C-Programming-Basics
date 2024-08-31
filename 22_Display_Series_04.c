//Display the series: 2 4 16 256 65536 ....... (n terms)

#include<stdio.h>
#include<math.h>

int main(){

    int i,n,x;

    printf("Give n\n");
    scanf("%d",&n);

    x=2;
    printf("2 ");
    for(i=1; i<n; i++)
    {
        x=pow(x,2);
        printf("%d ",x);
    }

    return 0;

}