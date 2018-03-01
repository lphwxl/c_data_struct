#pragma once

typedef struct node {
	int data;
	struct node *next;
} NODE, *PNODE;

PNODE init();
//�����ڵ�
PNODE createNode(int data);
//ͷ�巨
int insertHeadList(PNODE p,int data);
//β�����
int insertTailList(PNODE p, int data);
//��ʾ�ڵ�
void show(PNODE p);
//ͷ��ɾ��
int deleteHeadList(PNODE p);
//β��ɾ��
int deleteTailList(PNODE p);
PNODE findOne(PNODE p,int data);

int change(PNODE p,int data,int data1);

int deleteMidList(PNODE p,int n);