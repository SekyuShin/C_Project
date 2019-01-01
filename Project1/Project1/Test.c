//재귀 함수를 이용한 팩토리얼

#include<stdio.h>

int Factorial(int);

int main() {
	int input, result = 1;

	puts("팩토리얼을 구하기위해 숫자를 입력하시오");
	scanf("%d", &input);
	printf("%d! =", input);
	printf("= %d\n", Factorial(input));


	getch();
	return 0;
}

int Factorial(int input) {

	printf(" %d ", input);
	if (input == 1) return 1;
	else {
		printf("*");
		return input * Factorial(input - 1);
	}
}