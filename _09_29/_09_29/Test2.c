#include<stdio.h>


int main() {
	char str[][6] = { "Hello","gugug" };
	char *p1[2] = { str[0],str[1] }; // ������ �迭, ���� �ٸ��� ���ӻ��� �����ϰ� ����
	char(*p2)[6] = str; // �迭 ������, str�̶� ����ϰ� ���
	int i,j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 6; j++) {
			//printf("%c", p2[i][j]);
			//printf("%c", p1[i][j]);
			//printf("%c", str[i][j]);
		}
		printf("\n");
	}
	printf("%c",p2[0][3]);
	puts(p1[0]);


	getch();
	return 0;
}