	// linked list and its operation 
	#include<stdio.h>
	#include<stdlib.h>
	struct node{
		int data;
		struct node *next;
	};
	struct node *head=NULL;
	struct node *create(){
		struct node *n;
		n=(struct node*)malloc(sizeof(struct node));
		printf("enter data: ");
		scanf("%d",&n->data);
		n->next=NULL;
		return n;
	}
	void insert(){
		struct node *n1;
		n1=create();
		if(head==NULL){
			head=n1;
		}
		else{
			n1->next=head;
			head=n1;
		}
	}
	void del(){
		struct node *temp;
		if(head==NULL){
			printf("\nunderflow");
		}
		else{
			temp=head;
			head=head->next;
			free(temp);
		}
	}
	void disp(){
		struct node *temp;
		temp=head;
		if(head==NULL){
			printf("\nthe list is empty");
		}
		else{
			printf("\ndata is : ");
			while(temp!=NULL){
				printf("%d->",temp->data);
				temp=temp->next;
			}	
			printf("NULL\n");
		}
	}
	void spec(){
	    struct node *temp=head,*n,*temp1;
	    int p;
	    printf("enter position: ");
	    scanf("%d",&p);
	    for(int i=1;i<p-1 && temp!=NULL;i++){
	        temp=temp->next;
	    }
	    if(temp==NULL || p<1){
	        printf("invalid position");
	        return;
	    }
	    n=create();
	    temp1=temp->next;
	    temp->next=n;
	    n->next=temp1;
	}
	void search(){
		int s,f=1,count=0;
		printf("enter the value of the node");
		scanf("%d",&s);
		struct node *temp;
		temp=head;
		if(head!=NULL){
			while(f==1&&temp!=NULL){
			count++;
			if(temp->data==s){
				f=0;
				printf("node found");
				printf("\nposition of root : %d",count);
				return;
			}
			temp=temp->next;
			}
			if(f==1){
				printf("node not found");
			}	
		}
		else{
			printf("the list is empty");
		}
	}
	void count(){
		struct node *temp;
		temp=head;
		int count;
		if(head==NULL){
			printf("\nlist is empty");
		}
		else{
			while(temp!=NULL){
				count++;
				temp=temp->next;
			}
			printf("\ncount: %d",count);
		}
	}
	int main()
	{
		int a;
		while (1){
			printf("\n1.insert in the beg\n2.delete in the beg\n3.display\n4.count\n5.insrert specific\n6.search\n7.exit\n");
			scanf("%d",&a);
			switch (a){
				case 1:
					insert();
					break;
				case 2:
					del();
					break;
				case 3:
					disp();
					break;
				case 4:
					count();
					break;
				case 5:
					spec();
					break;
				case 6:
					search();
					break;
				case 7:
					return 0;
			}
		}
	}