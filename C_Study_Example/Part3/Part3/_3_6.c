#include<stdio.h>
#include<stdlib.h>
/*
���� ����� ����
������ �Է�(fgets) - ���� ���
*/
int main() {
	FILE* stream;
	char buffer[50];

	stream = fopen("data3.txt", "w");
	if (stream == NULL) puts("���� ���� ����\n");
	
	fgets(buffer, sizeof(buffer), stdin);//Ű����� ���� �ִ� 50byte �Է¹޾� buffer ����
	fputs(buffer, stream);

	fclose(stream);



	return 0;
}