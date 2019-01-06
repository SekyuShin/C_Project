#include<stdio.h>
#include<stdlib.h> // getch()
/*
파일 입출력 예제
txt파일 만들고 열기
*/


int main() {
	FILE* stream;	// 파일 스트림 포인터 변수 선언
	int file_state; // 파일의 종료를 위한 상태 체크 변수 선언

					//파일 스트림 생성과 파일 열기
	stream = fopen("data1.txt", "w"); // stream 생성후, 쓰기모드로 연다.
	if (stream == NULL) {
		printf("파일열기 에러\n");
	}

	//파일 닫기(파일 스트림 소멸)

	file_state = fclose(stream); // 파일 닫기
	if (file_state == EOF)
		puts("파일 닫기 에러\n");


	getch();
	return 0;
}

/*결과 data1.txt 생성*/