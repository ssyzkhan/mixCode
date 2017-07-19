#ifndef _MCOLOR_H
#define _MCOLOR_H
#include "../Datastruct/problem.h"
int m;
int isComplete(CombineProblem *p, int k){
	return 1;
}
void printSolution(CombineProblem *p, int k){
	int i, *x=p->x, n=p->n;
	for(i=0;i<n;i++)
		printf("%d ",x[i]);
	printf("\n");
}
List *makeIterms(CombineProblem *p, int k){
	List *iterms=NULL;
	int i;
	for(i=0;i<m;i++){
		int *e=(int*)malloc(sizeof(int));
		*e=m-i;
		listPushBegin(&iterms,e);
	}
	return iterms;
}
int isPartial(CombineProblem *p, int k){
	int i, *a=p->a,*x=p->x,n=p->n;
	for(i=0;i<k;i++)
		if((a[i*n+k]==1)&&(x[i]==x[k]))
			return 0;
	return 1;
}
CombineProblem *createMColor(int *a, int n, int m1){
	CombineProblem *p=(CombineProblem*)malloc(sizeof(CombineProblem));
	p->a=a;
	p->n=n;
	p->flag=0;
	p->x=(int*)malloc(n*sizeof(int));
	m=m1;
	p->a_size=sizeof(int);
	p->x_size=sizeof(int);
	p->isComplete=isComplete;
	p->printSolution=printSolution;
	p->makeIterms=makeIterms;
	p->isPartial=isPartial;
	return p;
}
#endif
