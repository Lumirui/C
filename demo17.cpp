#include<stdio.h>

int main(){
	int i,ge,sum=0;
	for(i=100;i<=999;i++){
		ge=i%10;
		if(ge==6 && i%3==0 && i%5!=0){
			sum++;
			printf("%d\n",i);
		}
		
			}printf("%d\n",sum);
} 
