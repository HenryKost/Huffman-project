#include<stdio.h>
#include "allHeaders.h"

ListNode* addNodeToList(ListNode* head, Node* add){
	ListNode* newList = (ListNode *)malloc(sizeof(ListNode));
	
	newList->thisNode = add;
	newList->next =head;
	head=newList;
	return head;

}



Node* makeNode(char character, int freq){
	Node* newNode = (Node *)malloc(sizeof(Node));
	newNode->character = character;
	newNode->freq = freq;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}


Node* extractMinNode(ListNode* head){
	ListNode* temp=head;
	int minFreq=head->thisNode->freq;
	Node* minNode= head->thisNode;
	while(*temp!=rem){
		if(minfreq>temp->thisNode->freq){
			int minFreq=temp->thisNode->freq;
			Node* minNode= temp->thisNode;
		}
		temp=temp->next;
	}
	temp=head;
	while(temp->next->thisNode !=minNode){
		temp=temp->next;
	
	}
	ListNode* removingNode = temp->next;
	temp->next=temp->next->next;
	removingNode->next=NULL;
	return minNode;
	
}
