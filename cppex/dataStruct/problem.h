#ifndef _PROBLEM_H
#define _PROBLEM_H
#include<vector>
using namespace std;
template<typename T1,typename T2>
class CombineProblem{
	public:
		T1 *a;
		int n;
		T2 *x;
		bool flag;
		virtual bool isComplete(int k){};
		virtual void printSolution(int k){};
		virtual vector<T2> makeIterms(int k){};
		virtual bool isPartial(int k){};				
};
#endif
