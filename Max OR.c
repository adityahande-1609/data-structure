//maximum and minmum OR value
#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter the values of the array: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int v=arr[i]|arr[j];
            if(v>max){
                max=v;
            }
        }
    }
    printf("MAX VALUE : %d",max);
    return 0;
}