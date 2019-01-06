/* 2-13.c
#include <stdio.h>
int main()
{
	float f1, f2;
	double d1, d2;

	printf("float형 실수 두 개 입력 : ");
	scanf("%f %e", &f1, &f2);
	printf("float형 실수 출력 : f1=%f, f2=%e\n", f1, f2);
		
	printf("double형 실수 두 개 입력 : ");
	scanf("%lf %le", &d1, &d2);
	printf("double형 실수 출력 : d1=%lf, d2=%le\n", d1, d2);

	return 0;
} */