#include"function.h"


// ��������ż����
// ����ͷ�ڵ㲻�洢���ݣ�������ż����ʱ��ֻ��ͷ�ڵ�֮��Ľڵ���е���
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
