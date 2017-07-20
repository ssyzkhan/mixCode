#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <string>
#include "insertionsort.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[]={4,3,2,5,9,8,0,7,1,6},i;
	string b[]={"ChongQing","ShangHai","AoMen","TianJin","Beijing","XiangGang"};
	double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
	
	insertionSort(a,a+10);
	
	/*
	for(i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	*/
	copy(a,a+10,ostream_iterator<int>(cout, " "));
	cout<<endl;
	
	vector<string> vb = vector<string>(b,b+6);
	insertionSort(vb.begin(),vb.end());
	copy(vb.begin(),vb.end(),ostream_iterator<string>(cout," "));
	cout<<endl;
	
	list<double> lc = list<double>(c,c+10);
	insertionSort(lc.begin(),lc.end());
	copy(lc.begin(),lc.end(),ostream_iterator<double>(cout, " "));
	cout<<endl;
	
	
	
	return 0;
}
