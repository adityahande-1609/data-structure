//queue operatiosn
#include<stdio.h>
int main()
{
	int n,a;
	printf("enter the size of queue:");
	scanf("%d",&n);
	int arr[n],front,rear;
	front=rear=-1;
	while(1){
		printf("\n1.insert\n2.delete\n3.display\n4.end");
		scanf("%d",&a);
		switch (a){
			case 1:
				printf("enter the value : ");
				scanf("%d",&a);
				if(rear==-1){
					front=rear=0;
					arr[rear]=a;
				}
				else if(rear==n-1){
					printf("queue overflow");
				}
				else{
					rear++;
					arr[rear]=a;
				}
				break;
			case 2:
				if(front==-1||front==rear+1){
					printf("queue underflow");
				}
				else{
					arr[front]=0;
					front++;
				}
				break;
			case 3:
				printf("array data : ");
				for(int i=front;i<=rear;i++){
					printf("%d ",arr[i]);
				}
				break;
			case 4:
				return 0;
				}
		}
	}
