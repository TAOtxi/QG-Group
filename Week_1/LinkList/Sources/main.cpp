#include "function.h"

int main() {

	Node* head = CreateNode();
	// 生成个链表
	for (int i = 0; i < 10; i++)
		InsertNode(head, CreateNode(i));

	// 输出原链表数据
	printf("原链表：\n");
	printList(head);

	// 反转单链表(非递归)
	head = ReverseList_1(head);
	printf("\n非递归反转链表：\n");
	printList(head);

	// 反转单链表(递归)
	head = ReverseList_2(NULL, head);
	printf("\n递归反转链表：\n");
	printList(head);

	// 找单链表中点
	printf("\n链表中点：\n");
	Node* mid = FindmidNode(head);
	printf("%d", mid->data);

	// 单链表奇偶调换
	printf("\n奇偶调换：\n");
	ReverseEvenList(head);
	printList(head);
	system("pause");
	return 0;
}