#include<stdio.h>

typedef struct student {
	char *name;
	int num;
}STUDENT;


int main() {
	STUDENT stu;
	char *c = { "shin" };

	stu.name = c;

	printf("%s\n", stu.name);



	getch();
	return 0;
}