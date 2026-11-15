#include<stdio.h>
#include<math.h>
int main(){
	int i,j,q,b,s,g;
	int k; //³µÅÆºÅ 
	for(i=0;i<=9;i++){
		for(j=0;j<=9;j++){
			if(i!=j){
				k=i*1000+i*100+j*10+j;
				for(int m=32;m<=99;m++){
					if(m*m==k){
						printf("%d\n",k);
					}
				}
				}
			}
	}	
	}

