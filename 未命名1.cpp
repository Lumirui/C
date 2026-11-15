#include <stdio.h>

int main(){
	int i;
	float sum=0,s;
	for(i=1;i<=500;i++){
		s=(float)i/((i+1)*(2*i-1));
		sum+=s;
	} 
	printf("%.5f\n",sum);
}

