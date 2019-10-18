#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"russian");
	float S,x,y,a;
	printf("x=");
	scanf("%f",&x);
	printf("y=");
	scanf("%f",&y);
	
	if(x!=0)
	{
		a=x*x-log10(fabs(y/x));
	
		if (a>=0)
		{
		S=(cos(x)-3*(1/tan(y))/(exp(-x*y)+pow(sqrt(a),6)));
		printf("S=%f\n",S);
		}
		
		else
			printf("Решения нет\n");
	
	}
	
	else{
		printf("нет решения\n");
	}
	system("pause");
	return 0;
}
