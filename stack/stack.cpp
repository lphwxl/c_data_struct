#include "stdafx.h"

void init(PSTACK stack) {
	if (stack) {
		stack->top = nullptr;
		return;
	}
	printf("¿ÕÕ»\n");
}

int isEmpty(PSTACK stack) {
	if (stack && stack->top) {
		return 1;
	}
	return 0;
}

int push(PSTACK stack, int data) {
	if (!stack) {
		return 0;
	}
	PNODE p = (PNODE)malloc(sizeof(NODE));
	p->data = data;
	p->next = stack->top;
	stack->top = p;
	return 1;
}

int pop(PSTACK stack) {
	int i = isEmpty(stack);
	if (!i) {
		printf("Á´±íÎª¿Õ\n");
		return 0;
	}
	PNODE pNew = nullptr;
	pNew = stack->top->next;
	int data = stack->top->data;
	free(stack->top);
	stack->top = pNew;
	return data;
}
PSTACK createStack() {
	PSTACK pStack = (PSTACK)malloc(sizeof(STACK));
	init(pStack);
	return pStack;
}

int getStack(PSTACK p) {
	int total = 0;
	PNODE tmp = p->top;
	for (; tmp;tmp = tmp->next) {
		++total;
	}
	return total;
}