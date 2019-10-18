#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

long double fact(int n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fact(n - 1);
}

int main()
{
	setlocale(LC_ALL, "russian");
	int n = 1;
	float x, s, summa=0;
	double eps = 0.00001;
	printf("Введите значение переменной х = ");
	scanf("%f", &x);
	
	do {
		s = (powf(x, n) / fact(n));
		summa = summa + s;
		n++;
		n++;
	} 
	while (fabs(s) >= eps); {

		printf("f(x)=%.5f\n", summa);
		printf("shx=%.5lf", sinh(x));
	}
	return 0;
}
