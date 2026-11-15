#include<stdio.h>

int main(){
	int arr[20]={};
	int len=sizeof(arr)/sizeof(int);
	int i,n,sum=0;
	
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
		
	}
		for(i=0;i<len;i++){
			if(arr[i]>=0)
				sum+=arr[i];
		
	}
	printf("%d\n",sum);
} 
