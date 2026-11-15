#include<stdio.h>

int main(){
	int n;
	double sum=0,s;
	for(n=1;n<=500;n++){
		s=(double)n/((n+1)*(2*n-1));
		sum+=s;
	}
	printf("%.5f",sum);
} 
