#include<stack.h>
#include<iostream>
using namespace std;
int main(int argc, char** argv){
	int a[]={1,2,5,8,9,0,3,4,6,7},i;
	string b[]={"AoMen","BeiJing","ShangHai","ChongQing","TianJin","XiangGang"};
	double c[]={0.5,3.7,6.3,8.5,9.2,1.7,2.3,4.1,5.9,7.4};
	priority_queue<int,vector<int>,less<int> >p;
	for(i=0;i<10;i++)
		p.push(a[i]);
	while(!p.empty()){
		cout<<p.top()<<" ";
		p.pop();
	}
	cout<<endl;
	
}
