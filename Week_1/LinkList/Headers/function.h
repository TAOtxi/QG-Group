/*-------------------------------------------------------------------------------------
* 
* 2023/3/19
*
-------------------------------------------------------------------------------------*/


#ifndef _FUNCTION_H_	
#define _FUNCTION_H_

#include<stdio.h>
#include<stdlib.h>

// 单链表结构
typedef struct Node {
	int data;
	Node* next;
}Node;

// 双链表结构
typedef struct DbNode {
	int data;
	DbNode* front;
	DbNode* next;
}DbNode;

void FreeLinkList(Node* head);
void InsertNode(Node* head, Node* newNode, int data = -1);
void DeleteList(Node* head, int data);
Node* SearchList(Node* head, int data);
Node* CreateNode(int data = -1);
void ReverseEvenList(Node* head);
Node* FindmidNode(Node* head);
bool IsLoopList(Node* head);
Node* ReverseList_1(Node* head);
Node* ReverseList_2(Node* prev, Node* curr);
void printList(Node* head);

#endif