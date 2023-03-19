#include"function.h"

// �ͷ����������нڵ�
void FreeLinkList(Node* head) {

	Node* p = head;
	while (p != NULL) {
		Node* temp = p;
		p = p->next;
		free(temp);
	}
}

// ��ָ���ڵ������½ڵ�, �����data���룬 Ĭ�ϲ�������ĩβ��
void InsertNode(Node* head, Node* newNode, int data) {

	// �ж�head�Ƿ��ǿսڵ�
	if (head == NULL) {
		head = newNode;
		return;
	}
	Node* p = head;

	// ���뵽����ĩβ
	if (data == -1) {

		while (p != NULL)
			if (p->next == NULL) {
				p->next = newNode;
				return;
			}
			else p = p->next;
	}

	// ���뵽ָ���ڵ��
	else while (p != NULL) {

		if (p->data == data) {
			newNode->next = p->next;
			p->next = newNode;
			return;
		}
		p = p->next;
	}
}

// ɾ��ָ���ڵ�
void DeleteList(Node* head, int data) {

	Node* p = head;
	while (p != NULL) {
		Node* q = p;
		p = p->next;
		if (p->data == data) {
			q->next = p->next;
			free(p);
			return;
		}
	}
}

// �����ڵ�
Node* SearchList(Node* head, int data) {

	Node* p = head;
	while (p != NULL) {
		if (p->data == data)
			return p;
	}
	return NULL;
}

// ������ʾ���ڵ�
Node* CreateNode(int data) {

	Node* p = (Node*)malloc(sizeof(Node));

	// �ڴ����ʧ�ܣ��˳�����
	if (p == NULL)
		return NULL;
	p->next = NULL;

	// ����ͷ�ڵ�ʱ��������������ͷ�ڵ��data����ֵ
	if (data != -1)
		p->data = data;
	return p;
}

// �ҵ������е�(������ż�����ڵ�ʱֻ�����м������ڵ����߽ڵ�)
Node* FindmidNode(Node* head) {

	Node* p = head;
	int Node_num = 0;

	// ���������ж��ٽڵ�
	while (p != NULL) {
		p = p->next;
		Node_num++;
	}
	p = head;

	// ��ż�����м�ֵ�Ĳ�ͬȡֵ
	Node_num = Node_num % 2 ? Node_num / 2 : Node_num / 2 - 1;
	while (Node_num-- > 0)
		p = p->next;
	return p;
}

// �����������
void printList(Node* head) {

	Node* p = head;
	while (p->next != NULL) {
		p = p->next;
		printf("%d", p->data);
	}
}
