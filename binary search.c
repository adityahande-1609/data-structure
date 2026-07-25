#include<stdio.h>
//binary search
int main()
{
int a[20],i,key,m,h,s=0;
printf("enter number of elements: ");
scanf("%d",&h);
printf("enter elements of the array: \n");
for(i=0;i<h;i++)
{
	scanf("%d",&a[i]);
}
printf("enter element to be found: \n");
scanf("%d",&key);
while(s<h)
{
m=(h+s)/2;
	if(a[m]==key)
	{
		break;
	}
	else if (key<a[m])
	{
		h=m;
	}
	else
	{
		s=m;
	}
}
if(a[m]==key)
{
	printf("element found");
}
else
{
	printf("element not found");
}
return 0;
}
