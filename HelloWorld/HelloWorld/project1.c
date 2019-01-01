#include<stdio.h>

int main() {
	int a = 10, b = 20, c = 30;
	int i = 0;
	int temp;
	printf("Hello world \n");
	i = a / 2;
	temp = a % 2;
	while (1) {
		i=i << 1;


		if (temp == 0) {
			break;
		}
		else {
			temp = a % 2;
		}
		

	}
	
	getchar();
	return 0;
}