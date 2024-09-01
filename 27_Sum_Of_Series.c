//Find sum of series: 1 + 1/2 + 1/4 + 1/6 + ….+ 1/n

#include<stdio.h>

int main(){

    int n;

    printf("Enter the number of terms.\n");
    scanf("%d",&n);

    if(n==1)
    {
        printf("The sum is 1.");
    }
    else if (n%2!=0)
    {
        printf("Enter an even number.\n");
    }
    else
    {
        float i,sum=1;

        for(i=2; i<=n; i=i+2)
        {
            sum=sum+(1/i);
        }

        printf("The sum of the series is %f.",sum);

    }
    
    return 0;

}
