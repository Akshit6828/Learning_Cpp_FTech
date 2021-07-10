#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
struct Node
{
    int data;
    struct Node *next;
};
 struct Node *start,*first,*insert,*temp;

void insert_Beg(int x)
{
    insert=(struct Node *)malloc(sizeof(struct Node));
    insert->data=x;
    insert->next=NULL;
    first=insert;
    start=first;
}
void insert_anyPos(int y)
{
    start=first;
    int n;
    printf("Enter position");
    scanf("%d",&n);
    insert=(struct Node*)malloc(sizeof(struct Node));
    insert->data=y;
    int i;
    for(i=0;i<n;i++)
    {
        start=start->next;
        printf("procedding");
    }
    printf("procedding");
    start->next=insert;
    printf("procedding");
    insert->next=start->next->next;
    printf("procedding");
    printf("ddsed");
    start->next->next=NULL;
}
void delete_Pos(int p)
{
    if(p==0)
    {
        start=first;
        temp=first;
        first=start->next;
    }
    else
    {
        int i;
        for(i=0;i<p;i++)
        {
          start=start->next;
        }
       temp=start->next;
       start->next=start->next->next;
    }
    free(temp);
}
/*void reverse()
{
    struct Node *next,*prev,*current;
    current=head;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
}*/
void print()
{
    start=first;
    while(start!=NULL)
    {
        printf("%d",start->data);
        start=start->next;
    }
    printf("\n");
}
int main()
{
    start=(struct Node *)malloc(sizeof(struct Node));
 int option=0;
 while(option!=6)
     {
 printf("Enter choice:\n");
 printf("1:insert at beginning\n");
 printf("2:insert at any position\n");
 printf("3:delete element from linkedlist\n");
 printf("4:reverse of linkedlist\n");
 printf("5:print\n");
 printf("6:exit\n");
 scanf("%d",&option);
 switch(option)
 {
     case 0:
     printf("Zero case \n");
     break;
case 1:
    insert_Beg(78);
    break;
 case 2:
    insert_anyPos(67);
    break;
 case 3:
     delete_Pos(4);
     break;
 /*case 4:
     reverse();
     break;*/
 case 5:
    print();
    break;
 case 6:
    exit(0);
    break;
 default:
     printf("Wrong choice\n");
    break;
 }
 }
 return 0;
 getch();
}
