#ifndef _INSERTIONSORT_H
#define _INSERTIONSORT_H
#include<iterator>
using namespace std;
void insertionSort(int *a, int n){
	int i,j,key;
	for(j=1;j<n;j++){
		key=a[j];		
		i=j-1;
	
		while(i>=0 && a[i]>key){
		
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
}
#endif
