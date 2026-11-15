#include<stdio.h>

int main(){
	int arr[]={11,22,55,77,44};
	int len=sizeof(arr)/sizeof(int);
	int num=55;
	for(int i=0;i<len;i++){
		if(arr[i]==55){
			printf("ÔÚµÚ%dºÅ",i);
		}
	}
} 
