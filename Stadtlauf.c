#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "funktionen.h"

int main() {

	FILE* fp = NULL;
	int amount_persons = 0;
	persons* persons = NULL;

	fp = fopen("startliste.txt", "r");

	read_file(&amount_persons, fp, persons);

	fclose(fp);

	return 0;

}