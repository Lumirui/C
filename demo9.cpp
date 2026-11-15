#include<stdio.h>

int main(){
	int i,ge;
	scanf("%d",&i);
	while(i!=0){
		ge=i%10+ge*10;
		i=i/10;
	}
	printf("%d\n",ge);
}
	
