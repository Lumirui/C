#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int a,b,c,n;
	double x1,x2;

	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	n=b*b-(4*a*c);
	if(n>=0){
		printf("有实根\n");
		x1=(-b+sqrt(n))/(2*a);
		x2=(-b-sqrt(n))/(2*a);
		printf("%f\n%f\n",x1,x2);
	}
	else{
		printf("无实根\n");
	}
	
} 
