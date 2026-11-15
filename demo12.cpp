#include<stdio.h>

int main(){
	int arr[5]={};
	int len=sizeof(arr)/sizeof(int);
	int n;
	int b[]={};
	for(int i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=len-1;i>=0;i--){
		printf("%d\n",b[i]);
	}
	
	
}
	

