#include <stdio.h>


typedef struct Node {
	char character;
	int freq;
	struct Node* left, * right;
} Node;

typedef struct ListNode {
	Node* thisNode;
	struct ListNode* next;
} ListNode;

ListNode* addNodeToList(ListNode* head, Node* add);
Node* makeNode(char character, int freq);
Node* extractMinNode(ListNode** head);
