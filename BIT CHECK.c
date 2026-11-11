//check the the bit of the number if its set or reset
#include<stdio.h>
void check_bit(int n,int p){
	if((n &(1<<p))!=0){
		printf(" the bit is SET");
	}
	else{
		printf("the bit is reset ");
	}
}
int main()
{
	int num, pos;
	printf("enter the number: ");
	scanf("%d",&num);
	printf("enter the positin of the bit: ");
	scanf("%d",&pos);
	check_bit(num,pos);
	return 0;
}