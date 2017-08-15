#ifndef _GENERAL_H
#define _GENERAL_H
#include"../Datastruct/problem.h"
#include<iostream>
using namespace std;
template<typename T1,typename T2>
void explore(CombineProblem<T1,T2> *p,int k){
	int i,m;
	vector<T2> iterms;
	if(k>=p->n){
		if(p->isComplete(k)){
			p->flag=true;
			p->printSolution(k);
		}
		return;
	}
	iterms=p->makeIterms(k);
	m=iterms.size();
	for(i=0;i<m;i++){
		p->x[k]=iterms[i];
		if(p->isPartial(k))
			explore(p,k+1);
	}
}
template<typename T1, typename T2>
void backtrack(CombineProblem<T1,T2> *p){
	explore(p,0);
	if(!p->flag)
		cout<<"no solution!"<<endl;
}

#endif
