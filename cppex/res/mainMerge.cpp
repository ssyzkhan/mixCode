#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>
#include"../utility/merge.h"
using namespace std;
int main(int argc, char** argv){
	int a[]={1,2,5,8,9,0,3,4,6,7};
	string b[]={"AoMen","BeiJing","ShangHai","ChongQing","TianJin","XiangGang"};
	double c[]={0.5,3.7,6.3,8.5,9.2,1.7,2.3,4.1,5.9,7.4};
	//double c[]={7.4,5.9,4.1,2.3,1.7,9.2,8.5,6.3,3.7,0.5};
	
	vector<string> vb=vector<string>(b,b+6);
	list<double> lc=list<double>(c,c+10);
	
	merge(a,a+5,a+10);
	copy(a,a+10,ostream_iterator<int>(cout," "));
	cout<<endl;
	
	merge(vb.begin(),vb.begin()+3,vb.end());
	copy(vb.begin(),vb.end(),ostream_iterator<string>(cout, " "));
	cout<<endl;
	
	list<double>::iterator m=lc.begin();
	advance(m,5);
	inplace_merge<list<double>::iterator, less<double> >(lc.begin(),m,lc.end(),less<double>());
	copy(lc.begin(),lc.end(),ostream_iterator<double>(cout," "));
	cout<<endl;
	
	
}
