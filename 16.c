#include <stdio.h>
#include <math.h>

double g = 9.8;

void main()
{
	double m, uk;

	printf("질량을 입력하시오(kg) : ");
	scanf_s("%lf", &m);
	printf("운동마찰계수를 입력하시오 : ");
	scanf_s("%lf", &uk);
	printf("a. 나무 상자를 일정한 속력으로 움직이는데 필요한 힘은 %.2lfN입니다.\n", m * g * uk);
	printf("b. 만약 운동마찰계수가 0이라면 수평력은 %.2lf입니다.\n", m * g * 0);
}