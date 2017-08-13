#ifndef _GRAPH_H
#define _GRAPH_H
#include "list.h"
#include "vertex.h"
typedef struct Graph{
	List **adj;
	int n;
} Graph;
Graph *createGraph(float *a, int n){
	Graph *g=(Graph*)malloc(sizeof(Graph));
	int i,j;
	g->adj=(List**)malloc(n*sizeof(List*));
	g->n=n;
	for(i=0;i<n;i++){
		List *l=NULL;
		for(j=n-1;j>=0;j--)
			if(a[i*n+j]!=0.0){
				vertex *v=(vertex*)malloc(sizeof(vertex));
				v->index=j;
				v->weight=a[i*n+j];
				listPushBegin(&l,v);
			}
		*(List**)((g->adj)+i*sizeof(List*))=l;
	}
	return g;
}
void graphClear(Graph *g){
	int i;
	for(i=g->n;i>-1;i--)
		if((g->adj[i*sizeof(List*)])!=NULL){
			listClear(g->adj[i*sizeof(List*)]);
			free(g->adj[i*sizeof(List*)]);
		}
	free(g->adj);
	g->n=0;
}
#endif
