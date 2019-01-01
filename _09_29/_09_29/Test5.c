#include<stdio.h>
int func(int *i) {
	 return ++(*i);
}


int main() {

	int a = 10;
	int result = 0;

	result = func(&a);
	printf("%d \n", a);
	printf("%d \n", result);



	getch();
	return 0;
}