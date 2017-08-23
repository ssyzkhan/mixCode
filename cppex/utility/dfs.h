#ifndef _DFS_H
#define _DFS_H
#include<stack>
#include"../DataStruct/graph.h"
enum Vertex_color{
	WHITE,
	GRAY,
	BLACK
};
typedef enum Vertex_color Color;
pair<int*,pair<int*,int*> > dfs(Graph& g){
	int n=g.n,u,v,s;
	Color *color = new Color[n];
	int *pi=new int[n],*d=new int[n],*f=new int[n],time=0;
	fill(pi,pi+n,-1);
	fill(color,color+n,WHITE);
	stack<int> S;
	list<vertex>::iterator *pos=new list<vertex>::iterator[n];
	for(u=0;u<n;u++)
		pos[u]=g.adj[u].begin();
	for(s=0;s<n;s++){
		if(color[s]==WHITE){
			color[s]=GRAY;
			d[s]=++time;
			S.push(s);
		}
		while(!S.empty()){
			u=S.top();
			list<vertex>::iterator p=pos[u];
			v=(p!=g.adj[u].end())?((*p).index):-1;
			while(p!=g.adj[u].end()&&color[v]!=WHITE){
				p++;
				v=(p!=g.adj[u].end())?((*p).index):-1;
			
				pos[u]=p;
				if(pos[u]!=g.adj[u].end()){
					color[v]=GRAY;
					d[v]=++time;
					pi[v]=u;
					S.push(v);
				}else{
					color[u]=BLACK;
					f[u]=++time;
					S.pop();
					pos[u]=g.adj[u].begin();
				}
			}
		}
	}
	return make_pair(pi,make_pair(d,f));
}
#endif
