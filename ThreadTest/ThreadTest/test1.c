//기본 쓰레드 테스트

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<process.h>

unsigned int WINAPI ThreadFunction(void *arg);
void Error(const char *mes);

int main() {
	HANDLE hThread = NULL;
	DWORD dwThreadID = NULL;
	hThread = (HANDLE)_beginthreadex(NULL, 0, ThreadFunction, NULL, 0, (unsigned*)&dwThreadID);
	if (hThread == 0)Error("_beginthreadex Error\n");
	printf("생성된 쓰레드의 핸들 : %d\n", hThread);
	printf("생성된 쓰레드의 ID : %d\n", dwThreadID);
	Sleep(3000);

	printf("main 함수 종료\n");
	getch();
	return 0;
}
unsigned int WINAPI ThreadFunction(void *arg)
{
	for (int i = 0; i<5; i++)
	{
		Sleep(2000);
		printf("쓰레드 실행 중\n");
	}

	return 0;
}

void Error(const char *mes)
{
	printf("%s\n", mes);
	exit(0);
}



//출처: http://yappeekaboo.tistory.com/18 [까꿍]
