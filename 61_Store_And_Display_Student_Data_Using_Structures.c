//Store the data of a student in structure array and display the same

#include <stdio.h>

struct stin
{
    int r_no;
    char name[50];
    float marks;
    char grade;
};

int main(){

    struct stin s;

    printf("Roll No?\n");
    scanf("%d",&s.r_no);

    printf("Name?\n");
    scanf("%s",&s.name);

    printf("Marks?\n");
    scanf("%f",&s.marks);

    getchar();
    printf("Grade?\n");
    scanf("%c",&s.grade);

    printf("\nYour name is %s\nYour R.No is %d\nYour marks are %f\nYour grade is %c\n",s.name,s.r_no,s.marks,s.grade);

    return 0;

}