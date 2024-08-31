// find sum of all elements of an integer array

#include<stdio.h>
int main()
{
    int a[100],n,i,sum=0;
    printf("enter size of integer array:");
    scanf("%d",&n);
    printf("enter the elements of integer array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of all elements of integer array is %d",sum);
    return 0;
}