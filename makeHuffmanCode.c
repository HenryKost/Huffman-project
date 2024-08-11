#include <stdio.h>
#include "allHeaders.h"

void makeHuffmanCode(Node* head, int* huffmanCodes, int branch) {
	if (head == NULL) {
		return huffmanCodes;
	}
	else {
		if (head->left == NULL && head->right == NULL) {
			huffmanCodes[head->character] = branch;
		}
		else {
			makeHuffmanCode(head->left, huffmanCodes, branch * 10);
			makeHuffmanCode(head->right, huffmanCodes, branch * 10 + 1);
		}
	}
}