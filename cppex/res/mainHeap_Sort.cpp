#include<iostream>
#include<algorithm>
#include<iterator>
#include<vector>
using namespace std;
int main(int argc, char** argv){
	int a[]={5,1,9,4,6,2,0,3,8,7};
	string b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
	vector<string> vb=vector<string>(b,b+6);
	
	make_heap(a,a+10,less<int>());	
	sort_heap(a,a+10,less<int>());
	copy(a,a+10,ostream_iterator<int>(cout, "  "));
	cout<<endl;
	
	make_heap(vb.begin(),vb.end(),greater<string>());
	sort_heap(vb.begin(),vb.end(),greater<string>());
	copy(vb.begin(),vb.end(),ostream_iterator<string>(cout, "  "));
	cout<<endl;
	return (EXIT_SUCCESS);
}