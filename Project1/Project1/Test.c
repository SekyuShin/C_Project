//��� �Լ��� �̿��� ���丮��

#include<stdio.h>

int Factorial(int);

int main() {
	int input, result = 1;

	puts("���丮���� ���ϱ����� ���ڸ� �Է��Ͻÿ�");
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