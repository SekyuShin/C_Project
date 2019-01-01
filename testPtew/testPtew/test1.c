//soil
//xxxx 1010 0011 1110
#include<stdio.h>
void printBinary(int input,int num) {
	int mask=0;
		
		for (int i = num*8-1; i >= 0; i--) {
			mask = 1 << i; printf("%d", input & mask ? 1 : 0);
			if (i % 4 == 0) printf(" "); } printf("\n");

}
int main(){
	int value=10;
	unsigned char a = 0b01001010, b = 0b00111110;
	printBinary(a,1);
	printBinary(b,1);
	
	a = a & 0x0F;
	value = (a <<8) + b;

	printBinary(value,2);



	getch();
	return 0;
}