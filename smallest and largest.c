//largest and smallest
#include<stdio.h>
int main()
{
	int a[5],i,small,large=0;
	printf("enter 5 numbers: ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	small=large=a[0];
	for(i=1;i<5;i++){
		if(small>a[i]){
			small=a[i];
		}
		if(large<a[i]){
			large=a[i];
		}
	}
	printf("largest : %d",large);
	printf("smallest: %d",small);
	return 0;
}