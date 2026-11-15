#include<stdio.h>

int main(){
	int a,b,c,d;
	for(a=1;a<=10;a++){
		for(b=1;b<=25;b++){
			for(c=1;c<=50;c++){
				for(d=1;d<=100;d++){
					if(50*a+20*b+10*c+5*d==500){
						printf("%d张50元，%d张20元，%d张10元，%d张5元\n",a,b,c,d);
					}
	}
	}
	}
	}
}
