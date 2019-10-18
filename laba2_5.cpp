#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"russian");
	int k;
	printf("k=");
	scanf("%d",&k);
	
	while(k>=3,k%3==0){
		k=k/3;
	}
	if(k==1)
		printf("Является\n");
	else
		printf("Не является\n");
		
	system("pause");
	return 0;
}
