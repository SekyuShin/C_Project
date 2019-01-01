#include"sekyu.h"




int main() {
	CHARACTER ch1 =  {"Skeyu",NULL,NULL,NULL };
	
	int a;
	ATK atk = { 0 };
	DEF def = { 0 };
	ATS ats = { 0 };
	
	ch1.adk = &atk;
	ch1.tank = &def;
	ch1.ads = &ats;

	puts("make your name");
	fgets(ch1.name,10,stdin);
	while (1) {
		choice(&ch1);
		
		
	}
	_getch();
	return 0;
}