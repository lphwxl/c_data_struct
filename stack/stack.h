#pragma once

typedef struct node {
	//成员变量
	int data;
	struct node *next;

} NODE,*PNODE;

typedef struct stack
{
	struct node * top;
}STACK,*PSTACK;

void init(PSTACK stack);

int isEmpty(PSTACK stack);

int push(PSTACK stack,int data);

int pop(PSTACK stack);

PSTACK createStack();

int getStack(PSTACK p);