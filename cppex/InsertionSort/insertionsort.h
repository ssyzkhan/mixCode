#ifndef _insertionSort_h
#define _insertionSort_h
#include <algorithm>
using namespace std;
template <typename Iterator, typename Comparator>
void insertionSort(const Iterator &a, const Iterator &b){
	int i,j,n=distance(a,b);
	Iterator p,q,t;
	for(j=1,q=p=a,p++,t=p;j<n;j++,q=p,p++,t=p){
		i=j-1;
		while(i>=0&&Comparator()(*q,*p))
			q--,i--;
		q++;
		t++;
		rotate(q,p,t);
	}
	cout<<"Hello World!"<<endl;
}
template <typename Iterator>
void insertionSort(const Iterator &a, const Iterator &b){
	typedef typename iterator_traits<Iterator>::value_type T;
	int i,j,n=distance(a,b);
	//T key;
	Iterator p,q,t;
	for(j=1,q=p=a,p++,t=p;j<n;j++,q=p,p++,t=p){
		//key=*p;
		i=j-1;
		while(i>=0&&*q>*p){
			//*t=*q;
			i--,q--;
		}
		q++;
		t++;
		rotate(q,p,t);		
	}
}
void insertionSort(int *a, int *b){
	int i,j,key,*p,*q,*t,n=b-a;
	for(j=1,q=p=a,p++,t=p;j<n;j++,q=p,p++,t=p){
		key=*p;
		i=j-1;
		while(i>=0&&*q>key){
			*t=*q;
			i--,q--,t--;
		}
		*t=key;
	}
}
void insertionSort(int *a,int n){
	int i,j,key;
	for(j=1;j<n;j++){
		key=a[j];
		i=j-1;
		while(i>=0&&a[i]>key){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
}

#endif
