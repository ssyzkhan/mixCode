#include<stdio.h>
#include<stdlib.h>
#include"../utility/general.h"
#include"../utility/mcolor.h"
int main(int argc, char** argv){
	int a[25]={0,1,1,0,0,
				1,0,0,1,1,
				1,0,0,1,1,
				0,1,1,0,1,
				0,1,1,1,0},
		n=5,m=3;
		CombineProblem *p;
		p=createMColor(a,n,m);
		backtrack(p,generalExplore);
		comprobClear(p);
		free(p);
		
}
