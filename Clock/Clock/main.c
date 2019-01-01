#include<stdio.h>
#include<time.h>
#include<windows.h>

void gotoxy(int x, int y);
void currentTime();
void display(int *hour, int *min, int *sec);
int checkingSec(int *sec, int *p_sec);


int main() {

	while (1) {
		currentTime();	
	}
	
	getch();
	return 0;
}
void gotoxy(int x, int y) { //위치 잡아주는 함수
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void currentTime() { // 현재 시간
	static int hour, min, sec, p_sec = 0;
	time_t current;
	struct tm *d;

	current = time(NULL);
	d = localtime(&current);
	hour = d->tm_hour;
	min = d->tm_min;
	sec = d->tm_sec;

	if (checkingSec(&sec, &p_sec) == 1) {
		display(&hour, &min, &sec);
	}

}

void display(int *hour, int *min, int *sec) {
	gotoxy(1, 1);
	printf("%02d : %02d : %02d", *hour, *min, *sec);

}

int checkingSec(int *sec, int *p_sec) { // 1초 체크
	if (*sec != *p_sec) {
		*p_sec = *sec;
		return 1;
	}
	else {
		return 0;
	}
}