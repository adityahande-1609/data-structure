#include<stdio.h>
int main()
{
	int a[7],i,key,f=1;
	printf("enter 7 elements : \n");
	for(i=0;i<6;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("enter the element to be found: \n");
	scanf("%d",&key);
	for(i=0;i<6;i++)
	{
		if(a[i]==key)
		{
			printf("element found ");
			f=0;
		break;
		}
	}
	if(f==1){
			printf("element not found");
		}
return 0;
}