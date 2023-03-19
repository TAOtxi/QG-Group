#include"function.h"


// 单链表奇偶调换
// 由于头节点不存储数据，所以奇偶调换时，只对头节点之后的节点进行调换
void ReverseEvenList(Node* head) {

	Node* curr;
	if (head != NULL)
		curr = head->next;
	else return;
	Node* prev = head;

	while (curr != NULL) {
		Node* temp = curr->next;

		if (temp != NULL) {
			prev->next = temp;
			prev = curr;
			curr = temp->next;
			temp->next = prev;
		}
		else {
			prev->next = curr;
			return;
		}
	}
	prev->next = curr;
}
