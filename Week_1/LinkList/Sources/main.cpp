#include "function.h"

int main() {

	Node* head = CreateNode();
	// ���ɸ�����
	for (int i = 0; i < 10; i++)
		InsertNode(head, CreateNode(i));

	// ���ԭ��������
	printf("ԭ����\n");
	printList(head);

	// ��ת������(�ǵݹ�)
	head = ReverseList_1(head);
	printf("\n�ǵݹ鷴ת����\n");
	printList(head);

	// ��ת������(�ݹ�)
	head = ReverseList_2(NULL, head);
	printf("\n�ݹ鷴ת����\n");
	printList(head);

	// �ҵ������е�
	printf("\n�����е㣺\n");
	Node* mid = FindmidNode(head);
	printf("%d", mid->data);

	// ��������ż����
	printf("\n��ż������\n");
	ReverseEvenList(head);
	printList(head);
	system("pause");
	return 0;
}