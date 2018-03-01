#include "stdafx.h"

PNODE initList(int *arr) {
	PNODE list = init(); //链表2
	for (int i = 0; i < 6;i++) {
		insertTailList(list, arr[i]);
	}
	return list;
}

PNODE sort(PNODE p1, PNODE p2) {
	if (p1 == nullptr || p2 == nullptr) {
		return nullptr;
	}
	PNODE p22 = p2;
	PNODE pNew = init();
	while (p22->next != nullptr) {
		p22 = p22->next;
		insertTailList(pNew,p22->data);
	}

	PNODE p11 = p1;
	PNODE tmp = pNew;
	PNODE prev = nullptr;
	PNODE back = nullptr;
	//PNODE t = nullptr;
	while (p11->next != nullptr) {
		
		
		p11 = p11->next;
		printf("while,%d\n", p11->data);
		//tmp = pNew;
		//当长度为0
		if (pNew->data == 0) {
			PNODE t = createNode(p11->data);
			tmp->next = t;
			tmp = pNew;
			++(pNew->data);
			continue;
		}
		//
		prev = tmp->next;
		back = prev->next;
		for (int i = 0; i < pNew->data;i++) {
			if (back != nullptr) {
				if (prev->data <= p11->data && back->data >= p11->data) {
					PNODE t = createNode(p11->data);
					t->next = back;
					prev->next = t;
					tmp = pNew;
					++(pNew->data);
					prev = back = nullptr;
					break;
				}
				else {
					show(pNew);
					prev = back;
					back = back->next;
				}
			}
			else {
				if (prev->data <= p11->data) {
					
					PNODE t = createNode(p11->data);
					prev->next = t;
					tmp = pNew;
					++(pNew->data);
					prev = nullptr;
					break;
				}
				else {
					PNODE t = createNode(p11->data);
					t->next = prev;
					pNew->next = t;
					tmp = pNew;
					++(pNew->data);
					prev = nullptr;
					break;
				}
			}
		}
	}
	return pNew;
}

PNODE ksort(PNODE p) {
	if (p == nullptr) {
		return nullptr;
	}
	
	PNODE pNew = init();
	while (p->next != nullptr) {
		p = p->next;
		insertHeadList(pNew, p->data);
	}
	return pNew;
}
