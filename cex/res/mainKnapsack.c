#include<stdlib.h>
#include<stdio.h>
#include"../utility/knapsack.h"
int main(){
	int w[]={2,3,4,5},v[]={3,4,5,7};
	int *m,*x,i;
	m=knapsack(w,v,4,9);
	x=buildSolution(m,4,w,9);
	for(i=0;i<4;i++)
		printf("%d ",x[i]);
	printf("\n");
	free(m);free(x);
	
}
