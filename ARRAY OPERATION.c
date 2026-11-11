#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter the elements:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("\n\narray: ");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("enter the position to delete:");
	scanf("%d",&i);
	a[i-1]=0;
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	return 0;
}