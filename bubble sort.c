#include<stdio.h>
int main()
{
	int a[5]={12,121,3,434,2},i,t,j;
	printf("unsorted array: \n");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
		
	}
	for(j=0;j<5;j++){
	
	for(i=0;i<5;i++){
		if(a[i]>a[i+1]){
		
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
		}
	}
	printf("sorted aray is : \n ");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
		
	}
	return 0;
}