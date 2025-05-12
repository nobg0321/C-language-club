#include <stdio.h>
#include <math.h>

double g = 9.8;
double a = 22.0;

void main()
{
	double m, s, k;

	printf("질량을 입력하시오(kg) : ");
	scanf_s("%lf", &m);
	printf("정지마찰계수를 입력하시오 : ");
	scanf_s("%lf", &s);
	printf("운동마찰계수를 입력하시오 : ");
	scanf_s("%lf", &k);
	printf("a. 정지마찰력 : %.2lf N\n", s * m * g);
	printf("b. 운동마찰력 : %.2lf N\n", k * m * g);
	printf("c. 물체를 22N의힘으로 수평방향으로 끌 때 문체의 가속도 : %.2lf m/s^2 \n", (a - k * m * g)/m);

}