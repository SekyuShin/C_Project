#include"sekyu.h"


void choice(CHARACTER *ch1) {
	int a;

	
	printf("choice 1. show Character 2. random spec\n");
	scanf_s("%d", &a);
	
	switch (a) {
	case 1:
		show(ch1);
		break;
	case 2:
		Init(ch1);
		break;

	}
}