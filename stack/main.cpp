// stack.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	PSTACK p = createStack();
	push(p,123);
	push(p, 34);
	push(p, 65);
	push(p, 12233);
	printf("total=%d\n", getStack(p));
	printf("%d\n",pop(p));
	printf("%d\n", pop(p));
	printf("total=%d\n", getStack(p));
	printf("%d\n", pop(p));
	printf("%d\n", pop(p));
	printf("total=%d\n", getStack(p));
	printf("%d\n", pop(p));
	system("pause");
    return 0;
}

