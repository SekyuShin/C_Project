#include<stdio.h>
#include<stdlib.h> // getch()
/*
���� ����� ����
txt���� ����� ����
*/


int main() {
	FILE* stream;	// ���� ��Ʈ�� ������ ���� ����
	int file_state; // ������ ���Ḧ ���� ���� üũ ���� ����

					//���� ��Ʈ�� ������ ���� ����
	stream = fopen("data1.txt", "w"); // stream ������, ������� ����.
	if (stream == NULL) {
		printf("���Ͽ��� ����\n");
	}

	//���� �ݱ�(���� ��Ʈ�� �Ҹ�)

	file_state = fclose(stream); // ���� �ݱ�
	if (file_state == EOF)
		puts("���� �ݱ� ����\n");


	getch();
	return 0;
}

/*��� data1.txt ����*/