#ifndef _QUEUE_H
#define _QUEUE_H
#include<assert.h>
#include<stdlib.h>
struct queue{
	int length;
	int heapSize;
	void *heap;
};

typedef struct queue priorityQueue;
priorityQueue heapAlloc(int size, int n){
	priorityQueue q;
	q.length=n;
	q.heapSize=0;
	q.heap=(void *)malloc(n*size);
	return q;
}
void enQueue(priorityQueue *q,int size, void *e,int(*compare)(void *,void *)){
	if(q->heapSize==q->length)
		return;
	int i=q->heapSize++;
	memcpy(q->heap+i*size,e,size);
	while(i>0&&compare(q->heap+parent[i]*size,q->heap+i*size)<0){
		swap(q->heap+i*size,q->heap+parent(i)*size,size);
		i=parent(i);
	}
}
void * deQueue(priorityQueue *q, int size,int(*compare)(void *, void *)){
	assert(q->heapSize>=1);
	void *top=(void*)malloc(size);
	memcpy(top,q->heap,size);
	q->heapSize--;
	memcpy(q->heap,q->heap+(q->heapSize)*size,size);
	heapify(q->heap,size,0,q->heapSize,compare);
	return top;
}
int empty(priorityQueue q){
	return q.heapSize<1;
}
void pqueueClear(priorityQueue *q){
	free(q->heap);
	q->heap=NULL;
	q->heapSize=q->length=0;
}
#endif 
