#include<stdio.h>

int main(){
	int i;
	double j;
	scanf("%d",&i);
	if(i>100){
		j=100+(i-100)*0.01;
	}
	else if(i>60 && i<=100){
		j=60+(i-60)*0.015;
	}
	else if(i>40 && i<=60){
		j=40+(i-40)*0.03;
	}
	else if(i>20 && i<=40){
		j=20+(i-20)*0.05;
	}
	else if(i>10 && i<=20){
		j=10+(i-10)*0.075;
	}
	else{
		j=0.1*i;
	}
	printf("%f\n",j);
} 
