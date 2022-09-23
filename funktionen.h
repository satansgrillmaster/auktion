#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct persons {
	int startnr;
	int category;
	char name[41];
} persons;

persons* read_file(int*, FILE*, persons*);