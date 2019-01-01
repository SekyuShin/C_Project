#include<stdio.h>
struct student {
	char name[20];
	int money;
	struct student *link;
};
typedef struct student STUDENT;



int main() {
	
	STUDENT stu[3] = { {"Kim",90,NULL},{"Shin",80,NULL},{"Hong",70,NULL} };

	stu[0].link = (stu+1);
	stu[1].link = (stu + 2);
	printf("%s %d \n", stu[0].name, stu[0].money);
	printf("%s %d \n", stu[0].*link.name, stu[0].link->money);



	getch();
	return 0;
}