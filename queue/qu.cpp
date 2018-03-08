#include "stdafx.h"


//初始化
void initQueue(PQUEUE p) {
	p->top = p->bottom = nullptr;
}

//创建队列
PQUEUE createQueue() {
	PQUEUE p = (PQUEUE)malloc(sizeof(QUEUE));
	if (!p) {
		return 0;
	}
	initQueue(p);
	return p; 
}
int isEmpty(PQUEUE p) {
	if (!p->top && !p->bottom) {
		return 0;
	}
	return 1;
}
int push(PQUEUE p, int data) {
	PNODE node = createNode(data);
	if (!node) {
		return 0;
	}
	if (!p->top && !p->bottom) {
		p->top = p->bottom = node;
	}
	else {
		p->bottom->next = node;
		p->bottom = node;
	}
	printf("%p\n", p->bottom);
	free(node);
	node = nullptr;
	return 1;
}

int pop(PQUEUE p) {
	int i = isEmpty(p);
	if (!i) {
		printf("队列为空\n");
		return 0;
	}
	PNODE node = createNode(0);
	int tmp = p->top->data;
	if (!p->top->next) {
		p->top = p->bottom = nullptr;
	}
	else {
		node->next = p->top->next;
		p->top = node->next;
		free(node);
		node = nullptr;
	}
	free(p->top);
	return tmp;
}

void showQueue(PQUEUE p) {
	if (!isEmpty(p)) {
		printf("空\n");
	}

	while (p->top != nullptr) {
		printf(" %d -> ",p->top->data);
		printf("%p\n", p->top->next);
		p->top = p->top->next;
	}
	printf("\n");

}