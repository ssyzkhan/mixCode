#include<iostream>
#include"../Datastruct/point.h"
using namespace std;
int main(){
	Point* p1=new Point();
	Point* p2=new Point();
	Point* p3=new Point();
	Point* p4=new Point();
	p1->x=3.1;
	p1->y=1.5;
	p2->x=-3.17;
	p2->y=-2.5;
	p3->x=-1.44;
	p3->y=4.0;
	p4->x=2.56;
	p4->y=-5.3;
	bool result=segmentsIntersect(*p1,*p2,*p3,*p4);
	if(result)
		cout<<"Intersect"<<endl;
	else
		cout<<"No"<<endl;
}
