#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node* create(){
	struct node *n1;
	n1=(struct node*)malloc(sizeof(struct node));
	printf("enter data :");
	scanf("%d",&n1->data);
	n1->next=NULL;
	return n1;
}
void insertbeg(){
	node *n1;
	n1=create();
	if (head==NULL){
		head=n1;
	}
	else{
		n1->next=head;
		head=n1;
	}
}
void rem(){
	if (head==NULL){
	printf("\nlist empty\n");
	}
	else{
	struct node *temp;
	temp=head;
	head=head->next;
	free(temp);
    }
	
}
void disp(){
	node *temp;
	if (head==NULL){
	printf("\nlist empty\n");
	}
	else{
		temp=head;
		printf("list items are : ");
	while(temp!=NULL){
	printf("%d ",temp->data);
	temp=temp->next;
    }
}
}
void insertend(){
	struct node *temp,*n;
	n=create();
	if(head==NULL){
		head=n;
	}
	else{
	temp=head;
		while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=n;
	}
}
int main(){
	int a;
	while(1){
		printf("\nenter your choice\n");
		printf("1.insert in the begining\n2.insert at end \n3.display\n4.remove from beging\n5.end");
		scanf("%d",&a);
		switch(a){
			case 1:
				insertbeg();
				break;
			case 2:
				insertend();
			break;
			case 3:
				disp();
				break;
			case 4:rem();
				break;
			
			case 5:exit(1);
		}
	}
	return 0;
}
