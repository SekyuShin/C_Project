#include<stdio.h>
/*
���� ����� ����
txt���� ���� ������ �Է�(fgetc)
*/
int main() {
	FILE *stream;
	int file_state;
	int input = 0;

	//���� ��Ʈ�� ������ ���� ����
	stream = fopen("data1.txt", "w");
	if (stream == NULL) puts("���� ���� ����\n");

	puts("������ �Է�");
	while (input != EOF) {
		input = fgetc(stdin);
		fputc(input, stream);
	}

	file_state = fclose(stream);
	if (file_state == EOF) puts("���� �ݱ� ����\n");

	getch();
	return 0;
}