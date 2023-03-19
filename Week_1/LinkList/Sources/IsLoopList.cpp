#include"function.h"


// �ж������Ƿ�ɻ�
bool IsLoopList(Node* head) {

	// �����ڵ�
	Node* slowNode = head, * fastNode = head;
	while (slowNode != fastNode) {
		Node* temp = fastNode->next;

		// �п�
		if (temp != NULL && temp->next != NULL)
			fastNode = temp->next;
		else return false;
		slowNode = slowNode->next;
	}

	// ѭ���˳����ǳɻ�����
	return true;
}