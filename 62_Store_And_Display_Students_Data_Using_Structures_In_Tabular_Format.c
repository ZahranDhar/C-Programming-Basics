// Store details of all the students of your class in an array of structure and then display the same in a 
// tabular format.


#include<stdio.h>

struct stin
{
    int r_no;
    char name[50];
    float marks;
    char grade;
};

int main(){

    struct stin s[100];
    int n,i;

    printf("No of students in calss?\n");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
    printf("Roll No of student %d?\n",i+1);
    scanf("%d",&s[i].r_no);

    printf("Name of student %d?\n",i+1);
    scanf("%s",&s[i].name);

    printf("Marks of student %d?\n",i+1);
    scanf("%f",&s[i].marks);

    getchar();
    printf("Grade of student %d?\n",i+1);
    scanf("%c",&s[i].grade);
    }

    printf("Roll.No\tName\tMarks\tGrade\n");

    for(i=0; i<n; i++)
    printf("%d\t%s\t%f\t%c\n",s[i].r_no,s[i].name,s[i].marks,s[i].grade);

    return 0;
    
}
