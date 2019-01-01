#include<stdio.h>

void func(int *p, int num);


int main() {

	int array[] = { 10,20,30,40,50,60,70,80,90 };

	func(array,sizeof(array)/sizeof(int));

	getch();
	return 0;
}

void func(int *p, int num) {
	int i;
	for (i = 0; i < num; i++) {
		printf("%d\n", p[i]);
		printf("%d\n", *(p+i));
	}


}