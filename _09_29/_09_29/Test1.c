#include<stdio.h>
void Dis_1() {
	printf("Dis_1\n");
}
void Dis_2() {
	printf("Dis_2\n");
}
void Dis_3() {
	printf("Dis_3\n");
}

func(void(*p)()) {

	p();
	return 0;
}


int main() {
	
	func(Dis_1);
	func(Dis_2);
	func(Dis_3);





	getch();
	return 0;
}