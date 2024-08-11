#include<stdio.h>
#include<stdlib.h>
#include "allHeaders"


ListNode* makeNodesFromCount(int* count) {
	ListNode* list = NULL;
	for (int i = 0;i < NUM_OF_ASCII;i++) {
		if (count[i] != 0) {
			Node* node = makeNode((unsigned char)i, count[i]);
			list = addNodeToList(list, node);

		}

	}
	return list;


}
