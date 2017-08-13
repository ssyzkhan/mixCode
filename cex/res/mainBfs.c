#include<stdio.h>
#include<stdlib.h>
#include"../utility/bfs.h"
int main(int argc, char** argv){
	int i, s=1, n=8,*pi,*d;
	pair r;
	float a[]={0,1,0,0,1,0,0,0,
			1,0,0,0,0,1,0,0,
			0,0,0,1,0,1,1,0,
			0,0,1,0,0,0,1,1,
			1,0,0,0,0,0,0,0,
			0,1,1,0,0,0,1,0,
			0,0,1,1,0,1,0,1,
			0,0,0,1,0,0,1,0};
	Graph *g=createGraph(a,8);
	r=bfs(g,1);
	pi=r.first;
	d=r.second;
	for(i=0;i<n;i++)
		if(i!=s){
			printPath(pi,s,i);
			printf(" length: %d\n",d[i]);
		}
	//graphClear(g);
	free(g);
	return (EXIT_SUCCESS);
}
