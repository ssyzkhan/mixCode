#include<stdlib.h>
#include<iostream>
#include"../DataStruct/graph.h"
#include"../utility/dfs.h"
using namespace std;
int main(int argc, char** argv){
	float a[]={0,1,0,0,1,1,
			1,0,0,0,0,1,
			0,0,0,1,0,1,
			0,0,1,0,0,1,
			1,0,0,0,0,1,
			1,1,1,1,1,0};
	int i,n=6,*pi,*d,*f;
	pair<int*,pair<int*,int*> > r;
	Graph g(a,n);
	r=dfs(g);
	pi=r.first;
	d=r.second.first;
	f=r.second.second;
	for(i=0;i<n;i++){
		cout<<i<<": "<<"parent "<<pi[i];
		cout<<" discover/finish: "<<d[i]<<"/"<<f[i]<<endl;
	}
}
