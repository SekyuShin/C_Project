#include<stdio.h>
#include<Windows.h>
#include<process.h>

unsigned _stdcall Thread1(void *arg) {
	while (1) {
		printf("a");
		Sleep(1000);

	}
}

int main(void) {
	_beginthreadex(NULL, 0, Thread1, 0, 0, NULL);
	while (1) {
		printf("b");
		Sleep(2000);
	}
	return 0;



}