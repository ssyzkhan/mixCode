#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main(int argc, char** argv){
	int a[]={1,2,5,8,9,0,3,4,6,7},i;
	char *b[]={"AoMen","BeiJing","ShangHai","ChongQing","TianJin","XiangGang"};
	double c[]={0.5,3.7,6.3,8.5,9.2,1.7,2.3,4.1,5.9,7.4};
	vector<string> vb=vector<string>(b,b+6);
	list<double> lc=list<double>(c, c+10);
	inplace_merge(a,a+5,a+10,greater<int>());
	copy(a,a+10,ostream_iterator<int>(cout, "  "));
	cout<<endl;
	inplace_merge(vb.begin(),vb.begin()+3,vb.end());
	copy(vb.begin(),vb.end(),ostream_iterator<string>(cout, "  "));
	cout<<endl;
	list<double>::iterator m=lc.begin();
	advance(m,5);
	inplace_merge(lc.begin(),m,lc.end(),greater<double>());
	copy(lc.begin(),lc.end(),ostream_iterator<double>(cout,"  "));
	cout<<endl;
	return (EXIT_SUCCESS);
}
