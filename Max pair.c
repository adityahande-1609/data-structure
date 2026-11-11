//maximum and minmum AND value
#include<stdio.h>
int main(){
	int a;
	printf("enter the array size: ");
	scanf("%d",&a);
	int arr[a];
	printf("enter the values of the array ");
	for(int i;i<a;i++){
		scanf("%d",&arr[i]);
	}
	int max=0;
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			int v=arr[i]&arr[j];
			if(v>max){
				max=v;
			}
		}
	}
	printf("MAX VALUE : %d",max);
	return 0;
}