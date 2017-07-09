#include<stack.h>
#include<iostream>
using namespace std;
int main(int argc,char** argv){
	int a[]={5,1,9,4,6,2,0,3,8,7};
	string b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
	vector<string> vb=vector<string>(b,b+6);
	priority_queue<int,vector<int>,less<int> > p;
	for(i=0;i<10;i++)
		p.push(a[i]);
	while(!p.empty()){
		cout<<p.top()<<" ";
		p.pop();
	}	
	cout<<endl;

}
