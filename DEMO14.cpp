#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double s=0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(i%3==0 && i%7==0){
			s=s+i;
			
		}
	}
	s=sqrt(s);
	printf("%f\n",s);
}
