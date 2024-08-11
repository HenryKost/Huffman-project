#include<stdio.h>
#include "allHeaders.h"

ListNode* addNodeToList(ListNode* head, Node* add) {
	ListNode* newList = (ListNode*)malloc(sizeof(ListNode));
	newList->thisNode = add;
	newList->next = head;
	head = newList;
	return head;

}



Node* makeNode(char character, int freq) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->character = character;
	newNode->freq = freq;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}


Node* extractMinNode(ListNode** headptr) {
	if (headptr == NULL) {
		return NULL;
	}
	ListNode* head = *headptr;
	if (head->next == NULL) {
		*(headptr) = NULL;
		return head->thisNode;
	}
	int min = head->thisNode->freq;
	Node* minNode = head->thisNode;
	ListNode* temp = head->next;
	while (temp != NULL) {
		if (temp->thisNode->freq < min) {
			min = temp->thisNode->freq;
			minNode = temp->thisNode;
		}
		temp = temp->next;
	}

	temp = head;
	if (head->thisNode == minNode) {
		*(headptr) = head->next;
		return temp->thisNode;
	}
	
	while (temp->next->thisNode != minNode) {
		temp = temp->next;
	}
	temp->next = temp->next->next;
	return minNode;

}
