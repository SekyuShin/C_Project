#include"sekyu.h"


void Init(CHARACTER *ch1) {
	srand(time(NULL));
	

	ch1->adk->spec = rand() % 10 + 1;
	ch1->tank->spec = rand() % 10 + 1;
	ch1->ads ->spec= rand() % 10 + 1;

	show(ch1);

}