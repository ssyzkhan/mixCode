#include"../utility/mergesort.h"
#include<iostream>
#include<vector>
#include<list>
#include<iterator>
using namespace std;
int main(int argc, char** argv){
	int a[]={1,2,5,8,9,0,3,4,6,7},i;
	char *b[]={"AoMen","BeiJing","ShangHai","ChongQing","TianJin","XiangGang"};
	double c[]={0.5,3.7,6.3,8.5,9.2,1.7,2.3,4.1,5.9,7.4};
	vector<string> vb=vector<string>(b,b+6);
	list<double> lc=list<double>(c,c+10);
	mergeSort<int*, greater<int> >(a,a+10);
	copy(a,a+10,ostream_iterator<int>(cout, "  "));
	cout<<endl;
	
	mergeSort<vector<string>::iterator,less<string> >(vb.begin(),vb.end());
	copy(vb.begin(),vb.end(),ostream_iterator<string>(cout, "  "));
	cout<<endl;
	
	mergeSort<list<double>::iterator,greater<double> >(lc.begin(),lc.end());
	copy(lc.begin(),lc.end(),ostream_iterator<double>(cout, "  "));
	cout<<endl;
}
