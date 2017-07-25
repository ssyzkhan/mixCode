#ifndef _SEGMENT_H
#define _SEGMENT_H
#include"point.h"
class EndPoint:public Point{
	int e;
	public:
		EndPoint(double a=0.0,double b=0.0,int c=0):Point(a,b),e(c){
		}
		bool operator<(EndPoint &b);
		friend class Segment;
		friend bool anySegmentIntersect(Vector<Segment> &S);
		friend ostream& operator<<(ostream &out,EndPoint &a);
};
bool EndPoint::operator <(EndPoint &b){
	if(this->x<b.x)
		return true;
	if(this->x==b.x)
		if(this->e==b.e)
			return this->y<b.y;
		else
			return this->e<b.e;
	return false;
} 
ostream& operator<<(ostream &out, EndPoint &a){
	Point x(a);
	out<<x;
	return out;
}
class Segment{
	EndPoint left;
	EndPoint right;
	double length;
	double tan;
	double yOffset;
	double yCoordinate(double x);
	public:
		Segment(){
		}
		Segment(EndPoint a, EndPoint b);
		EndPoint getLeft();
		EndPoint getRight();
		friend bool operator>(Segment a, Segment b);
		friend ostream& operator<<(ostream& out, Segment &a);
};
Segment::Segment(EndPoint a, EndPoint b){
	this->left=a;this->left.e=0;
	this->right=b;this->right.e=1;
	this->length=dist((Point)left,(Point)right);
	this->tan=((this->left).y-(this->right).y)/((this->left).x-(this->right).x);
	this->yOffset=this->tan*(this->left).x-this->left.y;
}
double Segment::yCoordinate(double x){
	assert(x>=this->left.x&&x<=this->right.x);
	return this->tan*x-this->yOffset;
}
EndPoint Segment::getLeft(){
	return this->left;
}
EndPoint Segment::getRight(){
	return this->right;
}
bool operator >(Segment a, Segment b){
	double x0=max(a.left.x,b.left.x),
			x1=min(a.right.x,b.right.x);
	assert(x0<=x1);
	double x=(x0+x1)/2.0,
		v1=a.yCoordinate(x),
		v2=b.yCoordinate(x);
	return v1>v2;
}
ostream& operator<<(ostream &out, Segment &a){
	out<<"["<<a.left<<", "<<a.right<<"]";
	return out;
}
#endif
