#include "stdafx.h"
#include "list.h"  

PNODE init() {
	PNODE head = (PNODE)malloc(sizeof(NODE));
	head->data = 0;
	head->next = nullptr;
	return head;
}

PNODE createNode(int data) {
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	if (pNew == nullptr) {
		return 0;
	}
	pNew->data = data;
	pNew->next = nullptr;
	return pNew;
}
int insertHeadList(PNODE p, int data) {
	
	if (p == nullptr) {
		return 0;
	}
	PNODE tmp = createNode(data);
	if (!tmp) {
		return 0;
	}
	tmp->next = p->next;
	p->next = tmp;
	return ++(p->data);
}
int insertTailList(PNODE p, int data) {
	PNODE pHead = p;
	if (p == nullptr) {
		return 0;
	}
	PNODE tmp = createNode(data);
	if (!tmp) {
		return 0;
	}
	while (p->next != nullptr) {
		p = p->next;
	}
	p->next = tmp;
	return ++(pHead->data);
}

void show(PNODE p) {
	
	if (p  == nullptr) {
		printf("错误的链表\n");
		return;
	}
	while (p->next != nullptr) {
		p = p->next;
		printf("%d->",p->data);
	}
	printf("\n");
}
//头部删除
int deleteHeadList(PNODE p) {
	if (p == nullptr) {
		return 0;
	}
	PNODE tmp = p->next->next;
	free(p->next);
	p->next = tmp;
	return --(p->data);
}
//尾部删除
int deleteTailList(PNODE p) {
	if (p == nullptr) {
		return 0;
	}
	if (p->next == nullptr) {
		printf("链表为空\n");
		return 0;
	}
	PNODE tmp = p;
	while (tmp->next->next != nullptr) {
		tmp = tmp->next;
	}
	free(tmp->next);
	tmp->next = nullptr;
	return --(p->data);
}
PNODE findOne(PNODE p,int data) {
	if (p == nullptr) {
		return nullptr;
	}
	while (p->next != nullptr) {
		p = p->next;
		if (p->data == data) {
			return p;
		}
	}
	return nullptr;
}

int change(PNODE p, int data, int data1) {
	
	PNODE t = findOne(p, data);
	if (t == nullptr) {
		return 0;
	}
	t->data = data1;
	return t->data;
}

int deleteMidList(PNODE p, int n) {
	if (p == nullptr || (n <= 0) || (p->data < n)) {
		return 0;
	}
	PNODE tmp = p;
	for (int i = 0; i < n - 1;i++) {
		tmp = tmp->next;
	}
	PNODE ptmp = tmp->next->next;
	free(tmp->next);
	tmp->next = ptmp;
	return --(p->data);
}

int insertMidList(PNODE p, int data, int n) {
	if (p == nullptr || (0 >= n) || p->data < n) {
		return 0;
	}
	PNODE tmp = p;
	for (int i = 0; i < n - 1;i++) {
		tmp = tmp->next;
	}
	PNODE pNew = createNode(data);
	pNew->next = tmp->next;
	tmp->next = pNew;
	return ++(p->data);
}