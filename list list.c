#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void insertbeg(void);
void display(void);
int main()
{ int a;
while (1)
{
    printf("1.Insert at beginning \n 2.Display \n 3.exit");
    printf ("\nEnter your choice:");
    scanf ("%d",&a);
    switch(a)
    {
        case 1: insertbeg();
        case 2: display();
        case 3: exit(1);
    }
}
    return 0;
}
  void insertbeg()
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf ("Enter data:");
        scanf ("%d", &newnode->data);
        newnode->next=NULL;
        if (head==NULL)
        {
            head=newnode;
        }
        else{
        newnode->next = head;
        head = newnode;
        }
    }
  void display()
  {
      struct node*temp;
      temp=head;
      if (head==NULL)
      {
          printf ("Empty");
      }
      while (temp!=NULL)
      {
          printf ("%d", temp->data);
          temp=temp->next;
      }
  }
