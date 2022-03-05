#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
};
struct node * head;

void push()
{
  int val;
  struct node *ptr;
  ptr=(struct node *)malloc(sizeof(struct node));
  if(ptr==NULL)
  {
    printf("memory not allocated");
  }
  else
  {

    printf("enter the value:");
    scanf("%d",&val);
    if(head==NULL)
    {
      ptr->data=val;
      ptr->next=NULL;
      head=ptr;
    }
    else
    {
      ptr->data=val;
      ptr->next=head;
      head=ptr;
    }
  }
  printf("item pushed\n");
}
void pop()
{
  int item;
  struct node *ptr;
  if(head==NULL)
  {
    printf("stack underflow\n");
  }
  else
  {
    item=head->data;
    ptr=head;
    head=head->next;
    free(ptr);
  }
  printf("item popped\n");
}
void display()
{
  int i;
  struct node *ptr;
  ptr=head;
  if(ptr==NULL)
  {
    printf("stack is empty\n");
  }
  else
  {
    while(ptr!=NULL)
    {
      printf("%d",ptr->data);
      ptr=ptr->next;
    }
  }
}
void main()
{
  int op;
  printf("Imlementation of stack Using Linkedlist\n");
  do{
    printf("1.push\t,2.pop\t,3.display\t,4.exit\t\n");
    scanf("%d",&op);
    switch(op)
    {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;

      case 3:
        display();
        break;

      case 4:
        exit;
      default:
        printf("invalid option" );
    }
  }while(op!=4);
}
