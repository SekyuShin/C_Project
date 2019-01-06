/* 3-3.c 
#include<stdio.h>
int main(void)
{
	FILE* stream;                      // 파일 스트림 생성을 위한 FILE 포인터 선언
	int file_state;                    // 파일의 종료를 위한 상태 체크 변수 선언      

	// 파일 스트림 생성과 파일 열기
	stream = fopen("data1.txt","w");
	if (stream == NULL)
		printf("파일 열기 에러 \n");

	// 파일 닫기(파일 스트림 소멸)
	file_state = fclose(stream);
	if (file_state == EOF)
		puts("파일 닫기 에러");
	return 0;
}
*/ 