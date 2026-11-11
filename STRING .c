#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50],c[50];
	int l;
	printf("Enter string 1: ");
	scanf("%s",a);
	printf("Enter string 2: ");
	scanf("%s",b);
	l=strlen(a);
	printf("Length of string 1 : %d",l);
	if(strcmp(a,b)==0){
		printf("\nStrings are equal");
	}
	else if (strcmp(a,b)<0){
		printf("\nString 1 is smaller");
	}
	else{
		printf("\nString 2 is smaller");
	}
	strcpy(b,a);
	printf("\nstring 2 is :%s",b);
	strrev(a);
	printf("\nreversed string 1: %s",a);
	strcat(a,b);
	printf("\nstring concatnated : %s",a);
	strupr(a);
	printf("\nUpper case : %s",a);
	printf("\nLower case : %s",b);
	return 0;
}