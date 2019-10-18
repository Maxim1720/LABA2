#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(0,"");
	int N;
	double sum=0,q;
	printf("N=");
	scanf("%d",&N);
	for(int k=1;k<=N;k++){
		for(int i=1;i<=k+1;i++){
			q=1.0/(pow(k,2)+i);
			sum = sum+q;
		}
	}
	printf("Сумма равна: %lf",sum);
	return 0;
	system("pause");
}
