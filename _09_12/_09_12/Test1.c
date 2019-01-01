#include<stdio.h>
#include<string.h>

int main() {
	int a =55;
	char str[4]=" ";

	strcat_s (str, a > 65 ? (a > 95 ? "»ó" : "Áß") : "ÇÏ");
	printf("%s\n",str );


	getch();
	return 0;
}