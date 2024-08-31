// Demonstrate use of pointers in programming.

#include<stdio.h>

int main()
{
    int age,*pAge;

    printf("What is your age?\n");
    scanf("%d",&age);

    pAge=&age;

    printf("The location of age is %p\n",&age);
    printf("The location of pAge is %p\n",pAge);
    printf("The value of age is %d\n",age);
    printf("The value of pAge is %d\n",*pAge);

    return 0;
}