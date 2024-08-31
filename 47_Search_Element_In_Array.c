//to search for an element in an integer array(linear search)

#include<stdio.h>
int main()
{
    int a[100],n,i,x,flag=0;
    printf("enter size of integer array:");
    scanf("%d",&n);
    printf("enter the elements of integer array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element you are searching: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            printf("found at position %d\n",i+1);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("not found ");
    }
return 0;
}

