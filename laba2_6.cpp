#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"russian");
	double p,k,t,years;
	printf("P=");
	scanf("%lf",&p);
	printf("k=");
	scanf("%lf",&k);
	printf("t=");
	scanf("%lf",&t);
	
	while(p>0){
		++years;
		p*=(1+k/100);
		p-=t;
	}
	printf("years=%lf\n",years);
	system("pause");
	return 0;
}
