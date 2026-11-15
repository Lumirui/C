#include<stdio.h>

int main(){
    int arr[3] = {0};
    int len = sizeof(arr) / sizeof(int);
    int i, j, temp;
    scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
    for(int i=0;i<len-1;i++){
    	for(int j=i+1;j<len;j++){
    	temp=arr[i];
    	arr[i]=arr[j];
    	arr[j]=temp;
	}
	
	}
	for(int i=0;i<len;i++){
    	printf("%d\n",arr[i]);
	}
}
