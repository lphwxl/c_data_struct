// homework.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main()
{
	int arr1[6] = {2,5,7,9,10,11};
	PNODE list1 = initList(arr1);
	int arr2[6] = { 1,3,4,6,8,12 };
	PNODE list2 = initList(arr2);
	show(list2);
	PNODE p = ksort(list2);

	show(p);
	system("pause");
    return 0;
}

