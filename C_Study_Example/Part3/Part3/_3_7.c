#include<stdio.h>
/*
파일 입출력 예제
fscanf,fprintf 사용
*/
int main() {
	FILE *stream;
	char name[10];
	int kor, eng, total;

	printf("1. 이름입력 :");
	fscanf(stdin, "%s", name);

	printf("2. 국어점수, 영어점수 입력 : ");
	fscanf(stdin, "%d %d", &kor, &eng);
	total = kor + eng;


	stream = fopen("data4.txt", "w");
	fprintf(stream, "%s %d %d %d \n", name, kor, eng, total);

	fclose(stream);




	return 0;
}