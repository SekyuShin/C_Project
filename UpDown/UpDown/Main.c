#include<stdio.h>
#include<stdlib.h> // rand()
#include<time.h> // �ٸ� seed�� �ֱ� ���ؼ�

int main() {
	int i=0;


	srand(time(NULL));

	for (i = 0; i < 5; i++) {
		printf("%d\n", rand()%100);

	}
	getch();
	return 0;
}