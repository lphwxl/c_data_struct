#pragma once

typedef struct node {
	int data;
	struct node *next;
} NODE, *PNODE;

PNODE init();
//创建节点
PNODE createNode(int data);
//头插法
int insertHeadList(PNODE p,int data);
//尾部添加
int insertTailList(PNODE p, int data);
//显示节点
void show(PNODE p);
//头部删除
int deleteHeadList(PNODE p);
//尾部删除
int deleteTailList(PNODE p);
PNODE findOne(PNODE p,int data);

int change(PNODE p,int data,int data1);

int deleteMidList(PNODE p,int n);