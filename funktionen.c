#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funktionen.h"

persons* read_file(int*amount, FILE * fp, persons* person) {

	int startnr = 0;
	int category = 0;
	int read = 0;

	char name[40] = "";

	if (*amount == 0) {
		person = (persons*)malloc(sizeof(persons*));
		read = fscanf(fp, "%d\t%d\t%[^\n]", &person[*amount].startnr, &person[*amount].category, name);
		strcpy(person[*amount].name, name);
		printf("%d\t%d", person[*amount].startnr, person[*amount].category);
	}
	else
	{
		printf("Nothing");
		//person = (persons*)realloc(person,(*amount + 1) * sizeof(persons*));
	}
	(*amount)++;
	return person;
}