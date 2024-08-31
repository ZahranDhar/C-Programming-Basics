// Sort an integer array using Bubble Sort

#include<stdio.h>

int main(){

    int arr[9]={9,8,7,6,5,4,3,2,1};
    int i,j,k;
    for(i=0; i<8; i++)
    {
        for(j=0; j<8-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
            }
            else
            {
                continue;
            }
        }
    }
    for(i=0; i<9; i++)
    {
        printf("%d ",arr[i]);
    }

}