#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void create(){
	node *n1;
	n1=(struct node*)malloc(sizeof(struct node));
	printf("enter data :");
	scanf("%d",&n1->data);
	n1->next=NULL;
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
struct node *head=NULL;
int main(){
	int a;
	while(1)
	{
		printf("\nenter your choice\n");
		printf("1.insert in the begining\n2.delete from the begining \n3.display\n4.exit\n");
		scanf("%d",&a);
		switch(a){
			case 1:
				create();
				break;
			case 2:
				rem();
				break;
			case 3:
				disp();
				break;
			case 4:exit(1);
		}
	}
	return 0;
}
