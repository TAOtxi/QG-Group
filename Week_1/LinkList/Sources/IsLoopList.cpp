#include"function.h"


// 判断链表是否成环
bool IsLoopList(Node* head) {

	// 快慢节点
	Node* slowNode = head, * fastNode = head;
	while (slowNode != fastNode) {
		Node* temp = fastNode->next;

		// 判空
		if (temp != NULL && temp->next != NULL)
			fastNode = temp->next;
		else return false;
		slowNode = slowNode->next;
	}

	// 循环退出则是成环链表
	return true;
}