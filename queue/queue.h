#pragma once

typedef struct queue
{
	struct node *top,*bottom;
}QUEUE,*PQUEUE;

typedef struct node
{
	int data;
	struct node *next;

}NODE,*PNODE;


//�����ڵ�
PNODE createNode(int data);
//��ʼ��
void initQueue(PQUEUE p);

//��������
PQUEUE createQueue();
//β�����
int push(PQUEUE p,int data);

//top ɾ��
int pop(PQUEUE p);

//�Ƿ�Ϊ��
int isEmpty(PQUEUE p);
void showQueue(PQUEUE p);