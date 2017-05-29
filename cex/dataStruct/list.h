#ifndef _LIST_H
#define _LIST_H
#include<string.h>
struct Node{
	void* data;
	struct Node* pre;
	struct Node* next;
};
typedef struct Node Node;
Node* builtList(void *array, int n, int size){
	int i;
	Node *p,*t,*l=(Node*)malloc(sizeof(Node));
	l->data=(void*)malloc(size);
	memcpy(l->data,array,size);
	l->pre=l->next=NULL;
	t=l;
	for(i=1;i<n;i++){
		p=(Node*)malloc(sizeof(Node));
		p->data=(void*)malloc(size);
		memcpy(p->data,array+i*size,size);
		t->next=p;
		p->pre=t;
		p->next=NULL;
		t=p;
	}
	
	return l;
}

void bilistClear(Node *bl){
	if(bl->data!=NULL){
		free((char*)bl->data);
		bl->data-NULL;
	}
	if(bl->pre!=NULL)
	    bl->pre->next=NULL;
	bl->pre=NULL;
	if(bl->next==NULL)
	    return;
	bilistClear(bl->next);
	free(bl->next);
	bl->next=NULL;
}

#endif
