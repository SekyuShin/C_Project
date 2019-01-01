#include<stdio.h>

int main() {
	int a[5] = { 10,15,19,1,5 };
	int b[5] = { 0 };
	int i=0, j;

	do {
		for (j = 0; j < 5; j++) {
			if (i != 0) {
				if (b[i - 1] > a[j] && b[i] < a[j]) {
					b[i] = a[j];
				}
			}
			else {
				if (b[i] < a[j]) b[i] = a[j];
			}
		}
		i++;



	} while (i<5);

	for (i = 0; i < 5; i++) {
		printf("%d\n", b[i]);
	}



	
	getch();
	return 0;
}