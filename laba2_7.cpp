#include<stdio.h>
#include<math.h>
int main()
{
	unsigned int n = 1;
	double x;
	double eps = 0.0001;
	printf("print x = ");
	scanf_s("%lf", &x);
	long double s = x;
	long double sum = s;
	for(; fabs(s)>eps; n++)								//while (fabs(s) > eps)
	{
		s*= x * x / (2. * n + 1.) / (2. * n);
		sum += s;
	}

	printf("f.(x)=%lf\n",sum);//результат
	printf("sh(x)=%lf", sinh(x));//проверка
	return 0;
}
