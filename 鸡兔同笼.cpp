#include <stdio.h>

int main(){
	int ji,tu;
	for(ji=0;ji<=35;ji++){
		tu=35-ji;
		if(tu+ji==35 && 2*ji+4*tu==94){
			printf("鸡的数量是%d,兔的数量是%d\n",ji,tu);
		}
	}
	printf("-----分割线-----\n");
	//百文买百鸡 
	int gong,mu,xiao;
	for(gong=0;gong<=25;gong++){
		for(mu=0;mu<=33;mu++){
			xiao=100-gong-mu;
			if(7*gong+4*mu==100){
				printf("买的公鸡有%d，母鸡有%d，小鸡有%d\n",gong,mu,xiao);
			}
			
		}
	}
}
