#include<stdio.h>
#include<stdlib.h>
#include "allHeaders"

int main(){
	FILE *flie = fopen("filename.txt","r+");
	if( file == NULL){
		perror("error opening file");
		return -1;
	
	}
	
	int count[NUM_OF_ASCII]={0};
	countFrequanncy(file,count);
	fclose(file);
	
	ListNode PQ=makeNodesFromCount(count);
		
		
		
}
