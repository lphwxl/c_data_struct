// queue.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	//
	PQUEUE queue = createQueue();
	push(queue,12);
	pop(queue);
	push(queue, 123);
	push(queue, 124);
	push(queue, 125);
	pop(queue);
	push(queue, 162);
	showQueue(queue);
	system("pause");
    return 0;
}

