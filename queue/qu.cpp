#include "stdafx.h"

PNODE createNode(int data) {
	PNODE p = (PNODE)malloc(sizeof(NODE));
	p->data = data;
	p->next = nullptr;
	return p;
}
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
	
	return 1;
}

int pop(PQUEUE p) {
	int i = isEmpty(p);
	if (!i) {
		printf("队列为空\n");
		return 0;
	}
	PNODE node = nullptr;
	int tmp = p->top->data;

	//int da = qu->front->data;
	//PNODE P = qu->front->next;
	//free(qu->front);  先删除在判断----代码少
	//qu->front = P;
	if (!p->top->next) {  //先判断再删除
		free(p->top);
		p->top = p->bottom = nullptr;
	}
	else {
		node = p->top->next;
		free(p->top);
		p->top = node;
		node = nullptr;
		printf("00\n");
	}
	return tmp;
}

void showQueue(PQUEUE p) {
	if (!isEmpty(p)) {
		printf("空\n");
	}
	while (p->top != nullptr) {
		printf("%d -> ",p->top->data);//
		p->top = p->top->next;
	}
	printf("\n");

}