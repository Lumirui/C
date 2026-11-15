#include<stdio.h>

int main(){
	int sum;
	int b,s,g;
	for(b=1;b<=4;b++){
	for(s=1;s<=4;s++){
	for(g=1;g<=4;g++){
		if(b!=s && b!=g && s!=g){
			sum=b*100+s*10+g;
			printf("%d\n",sum);
		}
	}
	}	
	}

	

} 
