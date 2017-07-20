#ifndef _NQUEENS_H
#define _NQUEENS_H
#include"../Datastruct/problem.h"
#include<iostream>
using namespace std;
class NQueens:public CombineProblem<int,int>{
	public:
		NQueens(int n){
			this->a=NULL;
			this->n=n;
			this->flag=false;
			this->x=new int[n];
		}
		~NQueens(){
			if(this->x!=NULL){
				delete [] this->x;
				this->x=NULL;
			}
		}
		bool isComplete(int k){
			return true;
		}
		void printSolution(int k){
			int i,j;
			for(i=0;i<n;i++){
				for(j=1;j<x[i];j++)
					cout<<"-";
				cout<<"Q";
				for(j++;j<=n;j++)
					cout<<"-";
				cout<<endl;
			}
			cout<<endl;
		}
		vector<int> makeIterms(int k){
			vector<int> iterms;
			int i;
			for(i=0;i<n;i++)
				iterms.push_back(i+1);
			return iterms;
		}
		bool isPartial(int k){
			int i,difference;
			for(i=0;i<k;i++){
				difference=x[i]-x[k];
				if((difference==0)||difference==i-k||difference==k-i)
					return false;
			
			}
			return true;
		}
};
#endif
