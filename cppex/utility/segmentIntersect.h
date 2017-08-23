#ifndef _SEGMENTINTERSECT_H
#define _SEGMENTINTERSECT_H
#include<set>
#include<iterator>
using namespace std;
#include"../dataStruct/segment.h"
struct p_i{
	EndPoint point;
	size_t index;
	p_i(EndPoint p,size_t i):point(p),index(i){}
};
bool operator<(p_i a,p_i b){
	return a.point<b.point;
}
bool anySegmentIntersect(vector<Segment> &S){
	typedef set<Segment,greater<Segment> >::iterator It;
	set<Segment,greater<Segment> > T;
	vector<p_i> p;
	for(size_t n=S.size(),i=0;i<n;i++){
		p.push_back(p_i(S[i].getLeft(),i));
		p.push_back(p_i(S[i].getRight(),i));
	}
	sort(p.begin(),p.end(),less<p_i>());
	for(size_t n=p.size(),i=0;i<n;i++){
		if(p[i].point.e==0){
			pair<It,bool> pt=T.insert(S[p[i].index]);
			It above,below,s;
			s=pt.first;
			above=below=s;
			if(above--!=T.begin()){
				Segment a(*s),b(*above);
				if(segmentsIntersect((Point)a.getLeft(),(Point)a.getRight(),(Point)b.getLeft(),(Point)b.getRight()))
					return true;
			}
			if(++below!=T.end()){
				Segment a(*s),b(*below);
				if(segmentsIntersect((Point)a.getLeft(),(Point)a.getRight(),(Point)b.getLeft(),(Point)b.getRight()))
					return true;
			}
		}else{
			s=T.find(S[p[i].index]),above=below=s;
			if(above--!=T.begin()&&++below!=T.end()){
				Segment a(*above),b(*below);
				if(segmentsIntersect((Point)a.getLeft(),(Point)a.getRight(),(Point)b.getLeft(),(Point)b.getRight()))
					return true;
				
			}
			T.erase(S[p[i].index]);
		}
	}
	return false;
}
#endif
