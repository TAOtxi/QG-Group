#include"function.h"


// ��ת����(�ǵݹ�)
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

// ��ת����(�ݹ�)
Node* ReverseList_2(Node* prev, Node* curr) {

	if (curr == NULL) {
		Node* head = CreateNode();
		head->next = prev;
		return head;
	}

	// �����ͷ�ڵ������ȥ��
	if (prev == NULL)
		curr = curr->next;

	Node* temp = curr->next;
	curr->next = prev;
	prev = curr;
	curr = temp;

	// �ݹ�
	return ReverseList_2(prev, curr);
}