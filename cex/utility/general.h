#ifndef _GENERAL_H
#define _GENERAL_H
#include"../Datastruct/problem.h"
void backtrack(CombineProblem *p, void(*explore)(void *,int)){
	explore(p,0);
	if(!p->flag)
		printf("no solution!\n");
}
void generalExplore(CombineProblem *p, int k){
	int i;
	if(k>=p->n){
		if(p->isComplete(p,k)){
			p->flag=1;
			p->printSolution(p,k);
			return;
		}
		return;
	}
	List *iterms=p->makeIterms(p,k),*q=iterms;
	while(q!=NULL){
		memcpy(p->x+k*p->x_size,q->data,p->x_size);
		if(p->isPartial(p,k))
			generalExplore(p,k+1);
		q=q->next;
	}
	listClear(iterms);
	free(iterms);
	iterms=NULL;
}
#endif
