//�⺻ ������ �׽�Ʈ

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
	printf("������ �������� �ڵ� : %d\n", hThread);
	printf("������ �������� ID : %d\n", dwThreadID);
	Sleep(3000);

	printf("main �Լ� ����\n");
	getch();
	return 0;
}
unsigned int WINAPI ThreadFunction(void *arg)
{
	for (int i = 0; i<5; i++)
	{
		Sleep(2000);
		printf("������ ���� ��\n");
	}

	return 0;
}

void Error(const char *mes)
{
	printf("%s\n", mes);
	exit(0);
}



//��ó: http://yappeekaboo.tistory.com/18 [���]
