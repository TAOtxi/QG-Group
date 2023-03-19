#include"function.h"

// 释放链表中所有节点
void FreeLinkList(Node* head) {

	Node* p = head;
	while (p != NULL) {
		Node* temp = p;
		p = p->next;
		free(temp);
	}
}

// 在指定节点后插入新节点, 如果无data传入， 默认插入链表末尾。
void InsertNode(Node* head, Node* newNode, int data) {

	// 判断head是否是空节点
	if (head == NULL) {
		head = newNode;
		return;
	}
	Node* p = head;

	// 插入到链表末尾
	if (data == -1) {

		while (p != NULL)
			if (p->next == NULL) {
				p->next = newNode;
				return;
			}
			else p = p->next;
	}

	// 插入到指定节点后
	else while (p != NULL) {

		if (p->data == data) {
			newNode->next = p->next;
			p->next = newNode;
			return;
		}
		p = p->next;
	}
}

// 删除指定节点
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

// 搜索节点
Node* SearchList(Node* head, int data) {

	Node* p = head;
	while (p != NULL) {
		if (p->data == data)
			return p;
	}
	return NULL;
}

// 创建带示例节点
Node* CreateNode(int data) {

	Node* p = (Node*)malloc(sizeof(Node));

	// 内存分配失败，退出函数
	if (p == NULL)
		return NULL;
	p->next = NULL;

	// 创建头节点时函数不带参数，头节点的data不赋值
	if (data != -1)
		p->data = data;
	return p;
}

// 找单链表中点(链表有偶数个节点时只返回中间两个节点的左边节点)
Node* FindmidNode(Node* head) {

	Node* p = head;
	int Node_num = 0;

	// 遍历链表有多少节点
	while (p != NULL) {
		p = p->next;
		Node_num++;
	}
	p = head;

	// 奇偶数的中间值的不同取值
	Node_num = Node_num % 2 ? Node_num / 2 : Node_num / 2 - 1;
	while (Node_num-- > 0)
		p = p->next;
	return p;
}

// 输出链表数据
void printList(Node* head) {

	Node* p = head;
	while (p->next != NULL) {
		p = p->next;
		printf("%d", p->data);
	}
}
