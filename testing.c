#include<stdio.h>
#include<stdlib.h>
#include "allHeaders"

int main(){

	int count[NUM_OF_ASCII]= {0};
	count[97]=5;
	count[98]=3;
	count[99]=1;
	ListNode* PQ=makeNodesFromCount(count);
	Node* tree=recHuffman(PQ);
		
		
}
