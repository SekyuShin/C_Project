#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define MAXTHREAD 5

DWORD WINAPI ThreadFunc(LPVOID n);
int main() {
	clock_t start, finish;
	double duration;
	DWORD threadId;
	HANDLE hThrd[MAXTHREAD];

	int i;
	start = clock();//���� �ð� ��ȯ

	for (i = 0; i<MAXTHREAD; i++) {
		ThreadFunc((LPVOID)i);
	}
	WaitForMultipleObjects(MAXTHREAD, hThrd, TRUE, INFINITE);
	for (i = 0; i<MAXTHREAD; i++) {
		CloseHandle(hThrd[i]);
	}
	//����
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f ���Դϴ�\n", duration);
	return 0;
}
DWORD WINAPI ThreadFunc(LPVOID n)
{
	for (int i = 0; i<1000000000; i++) {
		3 + 5 + 8 * 24;
	}
	return 0;
}


//��ó: https://doorbw.tistory.com/27 [Tigercow.Door]