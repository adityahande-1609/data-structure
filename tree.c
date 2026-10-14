#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node* createNode(int data)
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}
struct node* insert(struct node *root,int data)
{
if(root==NULL){
return createNode(data);
}
if(data < root->data){
root->left=insert(root->left,data);
}
else if(data > root->data){
	root->right=insert(root->right,data);
}
return root;
}
void inorder(struct node *root)
{
if(root!=NULL)
{
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
}
}
void preorder(struct node *root)
{
if(root!=NULL)
{
printf("%d ",root->data);
preorder(root->left);
preorder(root->right);
}
}
void postorder(struct node *root)
{
if(root!=NULL)
{
postorder(root->left);
postorder(root->right);
printf("%d ",root->data);
}
}
int main()
{
struct node *root=NULL;
int n,i,data;
printf("Enter Number of Nodes : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter Data : ");
scanf("%d",& data);
root=insert(root,data);
}
printf("\nIn-Order Traversal : ");
inorder(root);
printf("\nPreorder Traversal : ");
preorder(root);
printf("\nPost-Order Traversal : ");
postorder(root);
return 0;
}
