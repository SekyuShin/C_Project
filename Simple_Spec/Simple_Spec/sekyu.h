
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct atk {
	int spec;
}ATK;
typedef struct def {
	int spec;
}DEF;
typedef struct ats {
	int spec;
}ATS;



typedef struct character {
	char name[10];
	ATK *adk;
	DEF *tank;
	ATS *ads;

}CHARACTER;
void choice(CHARACTER *ch1);
void Init(CHARACTER *ch1);
void show(CHARACTER *ch1);