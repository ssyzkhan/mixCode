#ifndef _MERGESORT_H
#define _MERGESORT_H
#include"../utility/merge.h"
template<typename Iterator, typename Comparator>
void mergeSort(Iterator p, Iterator r){
	int n=distance(p,r);
	if(n>1){
		Iterator q=p;
		advance(q,n/2);
		mergeSort<Iterator,Comparator>(p,q);
		mergeSort<Iterator,Comparator>(q+1,r);
	}
}
#endif
