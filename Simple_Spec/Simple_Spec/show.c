#include"sekyu.h"

void show(CHARACTER *ch1) {

	printf("name : %s\n", ch1->name);
	printf("ATK : %d\n", ch1->adk->spec);
	printf("ATS : %d\n", ch1->ads->spec);
	printf("DEF : %d\n", ch1->tank->spec);


}