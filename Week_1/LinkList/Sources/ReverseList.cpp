#include"function.h"


// 反转链表(非递归)
Node* ReverseList_1(Node* head) {

	Node* prev = NULL;
	Node* curr = head->next;

	while (curr != NULL) {
		Node* temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	head = CreateNode();
	head->next = prev;
	return head;
}

// 反转链表(递归)
Node* ReverseList_2(Node* prev, Node* curr) {

	if (curr == NULL) {
		Node* head = CreateNode();
		head->next = prev;
		return head;
	}

	// 这里把头节点从链表去掉
	if (prev == NULL)
		curr = curr->next;

	Node* temp = curr->next;
	curr->next = prev;
	prev = curr;
	curr = temp;

	// 递归
	return ReverseList_2(prev, curr);
}