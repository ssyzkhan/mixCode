#ifndef _PROBLEM_H
#define _PROBLEM_H
#include"list.h"
struct CombineProblem{
	void *a;
	int a_size;
	int n;
	void *x;
	int x_size;
	int flag;
	int (*isComplete)(void *p,int k);
	void (*printSolution)(void *p, int k);
	List* (*makeIterms)(void *p, int k);
	int (*isPartial)(void *p, int k);
};
typedef struct CombineProblem CombineProblem;
void comprobClear(CombineProblem *p){
	if(p->a!=NULL)
		p->a=NULL;
	if(p->x!=NULL){
		free(p->x);
		p->x=NULL;
	}
	p->isComplete=NULL;
	p->isPartial=NULL;
	p->makeIterms=NULL;
	p->printSolution=NULL;
}
#endif
