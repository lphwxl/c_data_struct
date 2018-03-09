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


//创建节点
PNODE createNode(int data);
//初始化
void initQueue(PQUEUE p);

//创建队列
PQUEUE createQueue();
//尾部添加
int push(PQUEUE p,int data);

//top 删除
int pop(PQUEUE p);

//是否为空
int isEmpty(PQUEUE p);
void showQueue(PQUEUE p);