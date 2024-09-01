//Demonstrate use of pointers in self-referential structures

#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int Data;

    struct Node *Link;
};
int main()
{
    struct Node* Head= (struct Node*)(malloc(sizeof(struct Node)));
    struct Node* Second= (struct Node*)(malloc(sizeof(struct Node)));
    struct Node* Third= (struct Node*)(malloc(sizeof(struct Node)));

    Head->Link=Second;
    Head->Data=10;
    
    Second->Link=Third;
    Second->Data=20;
    
    Third->Link=NULL;
    Third->Data=30;

    struct Node* Temp= Head;

    while(Temp!=NULL)                                 
    {
        printf("%d->",Temp->Data);
        Temp=Temp->Link;
    }

    printf("NULL\n");

    free(Head);
    free(Second);
    free(Third);
    free(Temp);

    return 0;
}