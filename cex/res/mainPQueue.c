#include<stdio.h>
#include<stdlib.h>
#include"../utility/queue.h"
#include"../utility/compare.h"
int main(int argc, char** argv){
	int a[]={5,1,9,4,6,2,0,3,8,7},i;
	char *b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
	double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
	
	priorityQueue q=heapAlloc(sizeof(int),10);
	for(i=0;i<10;i++)
		enQueue(&q,sizeof(int),a+i,intLess);
	
	while(!empty(q))
		printf("%d ",*(int*)deQueue(&q,sizeof(int),intLess));
	printf("\n");
	pqueueClear(&q);
	
	q=heapAlloc(sizeof(char*),6);
	for(i=0;i<6;i++)
		enQueue(&q,sizeof(char*),b+i,strGreater);
	
	while(!empty(q))
		printf("%s ",*(char**)deQueue(&q,sizeof(char*),strGreater));
	printf("\n");
	pqueueClear(&q);
	
	q=heapAlloc(sizeof(double),10);
	for(i=0;i<10;i++)
		enQueue(&q,sizeof(double),c+i,doubleLess);
	while(!empty(q))
		printf("%1.1f ",*(double*)deQueue(&q,sizeof(double),doubleLess));
	printf("\n");
	pqueueClear(&q);
	
	return (EXIT_SUCCESS);
	
}
