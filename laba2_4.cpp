#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
void sov(int);
int main (){

    int n;
    setlocale(LC_ALL,"russian");
    printf("������� ����� \n");
    scanf("%d",&n);
    //sov(n);
    int sum=0;
    for(int i;i<n;i++){
    	if(n%i==0)
    		sum = sum+i;}
	if (sum==n)
		printf("����� ����������");
	else
		printf("����� ������������");
    return 0;
    system("pause");
}
