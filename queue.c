#include<stdio.h>
int main()
{
	int n,f,r;
	f=r=-1;
	printf("enter the number of elemets:");
	scanf("%d",&n);
	int queue[n];
	f=0;
	r=0;
int a;
while(1){
printf("enter choice:\n1.display\n2.deleted\n3.insertion\n");
scanf("%d",&a);
    switch(a){
    	case 1:
            for(int i=f;i<r;i++){
		    printf("%d ",queue[i]);
			}
			break;
		case 2:
			if(f==-1|| f>r){
			printf("underflow\n");
			break;
			}
			else{
			f+=1;
	 	    }
	 	    break;
		case 3:
			if(r>=n){
				printf("overflow \n");
				break;
			}
			else{
		        scanf("%d",&queue[r]);
				r+=1;
				}
			break;
}
}
return 0;
}
