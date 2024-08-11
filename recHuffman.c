#include <stdio.h>
#include "allHeaders.h"



Node* recHuffman(ListNode* PQ){
	if(list!=NULL && list->next!=NULL && list->next->next!=NULL){
		Node* nx=extractMinNode(PQ);
		Node* ny=extractMinNode(PQ);
		Node* newTree=makeNode(nx->character, nx->freq + ny->freq);
		PQ=addNodeToList(PQ,newTree);
		return recHuffman(PQ);
	}
	if(list!=NULL && list->next!=NULL){
		Node* nx=extractMinNode(PQ);
		Node* ny=extractMinNode(PQ);
		Node* FullTree=makeNode(nx->character, nx->freq + ny->freq);
		return FullTree;
	}
	if(list!=NULL){
		Node* FullTree=makeNode(nx->character, nx->freq + ny->freq);
		return FullTree;
	}
	return NULL;

}
