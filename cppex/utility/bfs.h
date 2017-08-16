#ifndef _BFS_H
#define _BFS_H
#include"../DataStruct/graph.h"
#include<limits>
#include<queue>

enum vertex_color{
	WHITE,GRAY,BLACK
};
typedef enum vertex_color Color;
pair bfs(Graph *g, int s){
	queue *Q=new queue();
	int *pi,*d,i,*u,*v;
	Color *color;
	int *pi=new int[g->n];
	int *d = new int[g->n];
	color=(Color*)malloc(g->n*sizeof(Color));
	for(i=0;i<g->n;i++){
		pi[i]=-1;
		d[i]=INT_MAX;
		color[i]=WHITE;
	}
	d[s]=0;
	color[s]=GRAY;
	Q.push_back(&s);
	while(!Q.empty()){
		u=Q.pop();
		list *q=*(list**)(g->adj+*u*sizeof(List*));
		while(q!=NULL){
			int *v;
			*v=((vertex *)(q->data))->index;
			if(color[*v]==WHITE){
				color[*v]=GRAY;
				d[*v]=d[*u]+1;
				pi[*v]=*u;
				Q.push_back(v);
			}
			q=q->next;
		}
		color[*u]=BLACK;
	}
	delete Q;
	Q=NULL;
	return make_pair(pi,d);
}
void printPath(int *pi, int s, int v){
	if(v==s){
		printf("%d ",s);
		return;
	}
	if(pi[v]==-1)
		printf("no path from %d to %d!\n",s,v);
	else{
		printPath(pi,s,pi[v]);
		printf("%d ",v);
	}
}
#endif
