//calculation

#include<stdio.h>

typedef union di {
	int i;
	double d;
}DI;

typedef struct rst {
	int a,b;
	DI di;

}RESULT;

void Add(RESULT *result) {
	(*result).di.i = (*result).a + (*result).b;
}
void Div(RESULT *result) {
	(*result).di.d = (double)(*result).a / (*result).b;
}
void Sub(RESULT *result) {
	(*result).di.i = (*result).a - (*result).b;
}
void Mul(RESULT *result) {
	(*result).di.i = (*result).a * (*result).b;
}


int main() {
	RESULT result;
	char op;

	scanf("%d %c %d", &result.a, &op, &result.b);
	switch (op) {
	case '+':
		Add(&result);
		printf("%d + %d = %d\n",result.a,result.b ,result.di.i);
		break;
	case '/':
		Div(&result);
		printf("%d / %d = %lf\n",result.a,result.b, result.di.d);
		break;
	case '*':
		Mul(&result);
		printf("%d * %d = %d\n", result.a, result.b, result.di.i);
		break;
	case '-':
		Sub(&result);
		printf("%d - %d = %d\n", result.a, result.b, result.di.i);
		break;
	
	}
	
	getch();
	return 0;
}