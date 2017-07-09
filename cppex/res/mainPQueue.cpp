#include<iostream>
#include<string>
#include"../utility/queue.h"
int main(int argc, char** argv){
	int a[]={5,1,9,4,6,2,0,3,8,7},i;
	string b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
	double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
	
	PrioQueue<int,less<int> > q;
	for(i=0;i<10;i++)
		q.enQueue(a[i]);
	while(!q.empty())
		cout<<q.deQueue()<<" ";
	cout<<endl;
	
	PrioQueue<string, greater<string> > q1;
	for(i=0;i<6;i++)
		q1.enQueue(b[i]);
	while(!q1.empty())
		cout<<q1.deQueue()<<" ";
	cout<<endl;
	
	PrioQueue<double,less<double> > q2;
	for(i=0;i<10;i++)
		q2.enQueue(c[i]);
	while(!q2.empty())
		cout<<q2.deQueue()<<" ";
	cout<<endl;
	return (EXIT_SUCCESS);
}
