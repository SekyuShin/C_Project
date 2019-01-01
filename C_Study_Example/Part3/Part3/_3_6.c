#include<stdio.h>
#include<stdlib.h>
/*
파일 입출력 예제
데이터 입력(fgets) - 버퍼 사용
*/
int main() {
	FILE* stream;
	char buffer[50];

	stream = fopen("data3.txt", "w");
	if (stream == NULL) puts("파일 열기 오류\n");
	
	fgets(buffer, sizeof(buffer), stdin);//키보드로 부터 최대 50byte 입력받아 buffer 저장
	fputs(buffer, stream);

	fclose(stream);



	return 0;
}