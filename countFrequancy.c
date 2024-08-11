#include<stdio.h>
#include "countFrequancy.h"

void countFrequancy(FILE *file, int count[NUM_OF_ASCII]){
	int c;
	while((c = fgetc(file)) != EOF){
		count[(unsigned char)c]++;
	}
}
