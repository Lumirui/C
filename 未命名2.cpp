#include <stdio.h>

int main(){
	int sum;
	double avg;
	int a[30]={11,15,17,20,31,12,45,56,65,81,68,83,69,62,90,
           89,85,83,83,70,79,81,62,76,79,66,85,89,89,72};
    int len=sizeof(a)/sizeof(int);
    for(int i=0;i<len;i++){
    	sum+=a[i];
	}
	avg=1.0*sum/len;
	printf("%d,%.2f",sum,avg);
}
