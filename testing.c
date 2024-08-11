#include<stdio.h>
#include<stdlib.h>

#define NUM_OF_ASCII 256

typedef struct Node {
	char character;
	int freq;
	struct Node *left, *right;
} Node;

void countFrequancy(FILE *file, int count[NUM_OF_ASCII]){
	int c;
	while((c = fgetc(file)) != EOF){
		count[(unsigned char)c]++;
	}
}

int main(){
	FILE *flie = fopen("filename.txt","r+");
	if( file == NULL){
		perror("error opening file");
		return -1;
	
	}
	
	int count[NUM_OF_ASCII];
	countFrequanncy(file,count);
	fclose(file);
	
	for( int i=0; i<NUM_OF_ASCII; i++){ // make nodes from count
		
	
	}
		
		
		
}
