#include<stdio.h>
int main()
{
	int n,top;
	printf("enter the number of elemets ;");
	scanf("%d",&n);
	int a[n];
	printf("enter number:");
	for(top=0;top<n;top++)
	{
		scanf("%d",&a[top]);
	}
	printf("\nstack :");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n poped elemnts: ");
	for(top=n-1;top>=0;top--){
		printf("%d ",a[top]);
	}
	return 0;
}
