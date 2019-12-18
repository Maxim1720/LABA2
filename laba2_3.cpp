#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main() {
	float x1, y1, x2, y2;

	printf("x1=");
	scanf_s("%f", &x1);
	printf("x2=");
	scanf_s("%f", &x2);
	printf("y1=");
	scanf_s("%f", &y1);
	printf("y2=");
	scanf_s("%f", &y2);

	if (x1 >= 0 && x2 >= 0 && y1 >= 0 && y2 >= 0 || x1 <= 0 && x2 <= 0 && y1 >= 0 && y2 >= 0 || x1 >= 0 && x2 >= 0 && y1 <= 0 && y2 <= 0 || x1 <= 0 && x2 <= 0 && y1 <= 0 && y2 <= 0) {
		
		if (x1 == x2 && y1 == y2 && x1==y1 && x2==y2) {
			printf("points lie at one point");
		}
		else if ((0 - y1) / (y2 - y1) == (0 - x1) / (x2 - x1)) // условие нахождения 3 точек на одной прямой (с учетом начала координат)
			printf("points are situated on strainght line");
		else {

			float A1, A2, A3, S;
			A1 = (unsigned)powf((x1 - x2), 2);
			A2 = (unsigned)powf((y1 - y2), 2);
			A3 = 0;
			S = A1 + A2 + A3;
			S = sqrt(S);
			printf("S = %.3f", S);
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