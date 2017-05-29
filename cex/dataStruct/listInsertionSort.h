#ifndef _INSERTIONSORT_H
#define _INSERTIONSORT_H

#include "list.h"

void listInsertionSort(Node *List,int size, int (*comp)(void *,void *)){
	Node *p,*q,*t;
	void* key=(void*)malloc(size);
	for(p=List->next;p!=NULL;p=p->next){
		memcpy(key,p->data,size);
		q=p->pre;
		t=p;
		while((q!=NULL)&&(comp(q->data,key)>0)){
			memcpy((q->next)->data,q->data,size);
			t=q;
			q=q->pre;
		}
		memcpy(t->data,key,size);
	}
}
#endif
