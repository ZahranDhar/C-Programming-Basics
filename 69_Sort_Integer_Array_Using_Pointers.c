// Sort an integer array using functions and pointers.

#include<stdio.h>

int sarr(int *, int n);
int main()
{

    int arr[100],n,*i;

    printf("What is the size of array?\n");
    scanf("%d",&n);

    printf("Enter the elemetsts of array.\n");

    for(i=&arr[0]; i<&arr[n]; i++)
    {
        scanf("%d",i);
    }

    sarr(&arr[0],n);

    for(i=&arr[0]; i<&arr[n]; i++)
    {
        printf("%d ",*i);
    }
    
    return 0;

}

int sarr(int *p, int n)
{
    int temp,i,j;

    for(i=0; i<n-1; i++)
    {
        
        for(j=0; j<n-1-i; j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                temp=*(p+j+1);
                *(p+j+1)=*(p+j);
                *(p+j)=temp;
        }
    }

}
return 0;
}
