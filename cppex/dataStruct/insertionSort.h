#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include <iterator>
#include <algorithm>
using namespace std;
template<typename T>
class greater{
	public:
		bool operator()(T x, T y);
};
template<typename T>
class less{
	public:
		bool operator()(T x, T y);
};
template<typename Iterator,typename Comparator>
void InsertionSort(const Iterator &a,const Iterator &b){
	typedef typename iterator_traits<Iterator>::value_type T;
	int i,j,n=distance(a,b);

	Iterator p,q,t;
	for(j=1,q=p=a,p++,t=p;j<n;j++,q=p,p++){
		i=j-1;
		while((i>=0)&&(Comparator()(*q,*p)))
			q--,i--;
		q++;
		t++;
		rotate(q,p,t);
	}
	
}

class InsertionSort
{
	public:
		InsertionSort();
	protected:
};

#endif
