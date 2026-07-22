#include<stdio.h>
int main(){
	int a[100],i,l=0,n,key,mid,h;
	printf("enter no of elemtnts :");
	scanf("%d",&n);
	printf("enter the elements of the array :\n");
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	h=n;
	printf("enter element to be found:\n");
	scanf("%d",&key);
	while(l<h){
	mid=(h-l)/2;
		if(a[mid]==key){
			printf("element found");
		break;
		}
		else if(mid>key){
		l=mid;
		}
		else{
			h=mid;
		}
    }
    if(a[mid]!=key){
    	printf("element not found");
	}
    return 0;
}