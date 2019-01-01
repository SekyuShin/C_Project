#include<stdio.h>


int main() {
	int i_val = 3;
	double d_val = 3.14;
	char c_val = 'k';
	void *p=NULL;

	p = &i_val;
	printf("%d\n", *(int*)p);
	p = &d_val;
	printf("%lf\n", *(double*)p);
	p = &c_val;
	printf("%c\n", *(char*)p);

	getch();
	return 0;
}