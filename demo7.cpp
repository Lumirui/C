#include<stdio.h>

int main(){
	int n,ge,sum;
	scanf("%d",&n);
	while(n!=0){
		ge=n%10; //取出个位数之前，先保留个位 
		sum+=ge;
		n=n/10;
	}
	printf("%d",sum); 
	} 
