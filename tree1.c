#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *left,*right;
};
struct Node *root = NULL;
void create(int val){
	struct Node *n1;
	n1=(struct node*)malloc(sizeof(struct Node));
	printf("enter the data: ");	
	scanf("%d",&n1->data);
	n1->left=n1->right=NULL;
	return n1;
}
void insert(struct Node *n1, int val){
	n1 =create(val);
	if(root==NULL){
		return n1;
	}
	else if(val<root->data){
		root->left=insert(root->left,val);
	}
	else{
		root->right=insert(root->right,val);
	}	
}
void inorder(struct Node *n2){
	if(n2->left!=NULL){
		display(n2->left);
	}
	printf("Data of node : %d",n2->data);
	if(n2->right!=NULL){
		display(n2->right);
	}
}
void preorder(struct Node *n){
	if (root !=NULL){
		printf("%d ",n->data);
		preorder(n->left);
		preorder(n-right);
	}
	
}
void postorder(struct Node *n){
	if (root !=NULL){
		preorder(n->left);
		preorder(n-right);
		printf("%d ",n->data);
	}
}
void inorder(struct Node *n){
	if (root !=NULL){
		preorder(n->left);
		printf("%d ",n->data);
		preorder(n-right);
	}
}
int main()
{
	int a;
	while (1){
		printf("1.insert node\n2. display\n3.exit");
	printf("enter your choice :");
	scanf("%d",&a);
	switch (a){
		case 1:
			int val;
			printf("enter the values of data :")
			scanf("%d",&val);
			insert(val);
			break ;
		case 2:
			printf("Inorder Traversal: ");
			inorder(root);
			printf("\nPreorder traversal: ");
			preorder(root);
			printf("\nPost order Traversal:");
			postorder(root);
			break;
		case 3:
			return 0;
		}
	}
}