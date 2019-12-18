#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main() {
	double x1, y1, x2, y2;

	printf("x1=");
	scanf_s("%lf", &x1);
	printf("x2=");
	scanf_s("%lf", &x2);
	printf("y1=");
	scanf_s("%lf", &y1);
	printf("y2=");
	scanf_s("%lf", &y2);

	if (x1 >= 0 && x2 >= 0 && y1 >= 0 && y2 >= 0 || x1 <= 0 && x2 <= 0 && y1 >= 0 && y2 >= 0 || x1 >= 0 && x2 >= 0 && y1 <= 0 && y2 <= 0 || x1 <= 0 && x2 <= 0 && y1 <= 0 && y2 <= 0) {
		
		if (x1 == x2 && y1 == y2 && x1==y1 && x2==y2) {
			printf("points lie at one point");
		}
		else if ((0 - y1) / (y2 - y1) == (0 - x1) / (x2 - x1)) // условие нахождения 3 точек на одной прямой (с учетом начала координат)
			printf("points are situated on strainght line");
		else {

			double A1, A2, A3, P;
			A1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
			A2 = sqrt((x1 * x1) + (y1 * y1));
			A3 = sqrt((x2 * x2) + (y2 * y2));
			P = A1 + A2 + A3;
			printf("P = %.3lf", P);
		}
	}
	else {
		if (x1 >= 0 && x2 >= 0 && y1 <= 0 && y2 >= 0 || x1 >= 0 && x2 >= 0 && y1 >= 0 && y2 <= 0 || x1 <= 0 && x2 >= 0 && y1 >= 0 && y2 >= 0 || x1 >= 0 && x2 <= 0 && y1 >= 0 && y2 >= 0 || x1 <= 0 && x2 <= 0 && y1 >= 0 && y2 <= 0 || x1 <= 0 && x2 <= 0 && y1 <= 0 && y2 >= 0 || x1 <= 0 && x2 >= 0 && y1 <= 0 && y2 <= 0 || x1 >= 0 && x2 <= 0 && y1 <= 0 && y2 <= 0) {
			printf("pointers are situated on the same plane");
		}
		else
			printf("points are situated on different fourths");
	}
}