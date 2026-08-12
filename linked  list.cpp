#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
node* create(int value) {
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = value; 
    newnode->next = NULL;  
    return newnode; 
}
int main()
{
	struct node *temp,*newnode1,*temp1;
	node* head = create(10);
//    head->next = create(20);
//    head->next->next=create(30);
	if(head==NULL){
		printf("empty");
	}
	temp=head;
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("end");
	return 0;
}