#include"../utility/general.h"
#include"nqueens.h"
int main(int argc, char** argv){
	CombineProblem<int,int> *p;
	p=new NQueens(4);
	backtrack(p);
	delete p;
	
}
