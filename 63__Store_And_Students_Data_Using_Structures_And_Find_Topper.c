// Store details (Roll No. and Marks) of all the students of your class in an array of structure and then find 
// the topper of the class.

#include<stdio.h>

struct stin
{
    int r_no;
    int marks;
};

int main()
{
    int n,i,tr,tm=-1;
    struct stin s[100];

    printf("Enter the number of students.\n");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("What is the score of roll no.%d?",i+1);
        scanf("%d",&s[i].marks);
        s[i].r_no=i+1;
    }

    for(i=0; i<n; i++)
    {
        if(s[i].marks>tm)
        {
            tm=s[i].marks;
            tr=i+1;
        }
        else
        {
            continue;
        }
    }

    printf("The topper of the class is Roll No:%d and the top score is:%d.",tr,tm);

    return 0;
}