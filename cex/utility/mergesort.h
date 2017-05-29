#ifndef _MERGESORT_H
#define _MERGESORT_H
#include"../utility/merge.h"
void mergeSort(void *a, int size, int p, int r, int(*comp)(void *,void *)){
	if(p<r){
		int q=(p+r)/2;
		mergeSort(a, size, p, q, comp);
		mergeSort(a,size,q+1,r,comp);
		merge(a,size,p,q,r,comp);
	}
}
#endif
