#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double f,q,p; 
	printf("q=");
	scanf("%lf",&q);
	printf("p=");
	scanf("%lf",&p);
	
	f=q>=100?((p-q)/(2*q)):
		0<q<100 && p<20?p-(2*q):
			(p-3*q);
			
	printf("f=%lf\n",f);
	system("pause");
	return 0;
}	
