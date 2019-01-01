#include<stdio.h>
/*
파일 입출력 예제
txt파일 열고 데이터 입력(fgetc)
*/
int main() {
	FILE *stream;
	int file_state;
	int input = 0;

	//파일 스트림 생성과 파일 열기
	stream = fopen("data1.txt", "w");
	if (stream == NULL) puts("파일 열기 에러\n");

	puts("데이터 입력");
	while (input != EOF) {
		input = fgetc(stdin);
		fputc(input, stream);
	}

	file_state = fclose(stream);
	if (file_state == EOF) puts("파일 닫기 에러\n");

	getch();
	return 0;
}