// singlelist.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"



int main()
{
	srand((unsigned)time(NULL));
	PNODE pHead = init();
	for (int i = 0; i < 20;i++) {
		int data = rand() % (100-30)+ 30;
		insertHeadList(pHead,data);
	}
	insertTailList(pHead,3000);
	insertTailList(pHead, 100000);
	show(pHead);
	printf("\n");
	//deleteHeadList(pHead);
	//deleteTailList(pHead);
	//int a = change(pHead,3000,3);
	//deleteMidList(pHead,21);
	int i = insertMidList(pHead,345,30);
	printf(i?"添加数据成功\n":"添加数据失败\n");
	show(pHead);
	//printf("\n%d", pHead->data);
	//printf("\n");
	//PNODE mark = findOne(pHead,3);
	//printf(mark?"存在":"不存在");
	system("pause");
    return 0;
}

