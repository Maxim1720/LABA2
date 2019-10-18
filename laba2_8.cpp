#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
//#ifndef M_PI
#define M_PI 3.14159265358979323846
//#endif
#include<locale.h>

using namespace std;

long double fact(int n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fact(n - 1);
}
int main()
{
	setlocale(0, "russian");
	int n=0;
	double x, f=0, eps = powf(10,-4),sum=0,p;
	cout<< "x=";
	cin >> x;
	if (x >= 0.1 && x <= 1) {
		do {
			f = (cos(n*M_PI/4) / fact(n)) * pow(x,n);
			sum = sum + f;
			n++;

		} 
		while (fabs(f) >= eps);
		printf("F(x)=%.4lf", sum);
		double F = (exp(x * cos(M_PI / 4) * cos(x * sin(M_PI / 4))));
		printf("\nF=%.4lf", F);
	}
	else
		printf("НЕТ РЕШЕНИЯ");
	return 0;
}
