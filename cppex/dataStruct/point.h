#ifndef _POINT_H
#define _POINT_H
#include"cmath"
const double epsilon=1e-10, PI=3.1415926;
struct Point{
	double x, y;
	Point operator +(Point b);
	Point operator -(Point b);
	Point operator *(Point b);
};
Point Point::operator +(Point b){
	return Point(this->x+b.x,this->y+b.y);
} 
Point Point::operator -(Point b){
	return Point(this->x-b.x,this->y-b.y);
} 
Point Point::operator *(Point b){
	return this->x*b.y-this->y*b.x;
} 
bool operator ==(Point a, Point b){
	return ((fabs(a.x-b.x)<epsilon)&&(fabs(a.y-b.y)<epsilon));
}
double dist(Point &a,Point &b){
	return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
int direction(Point &p0,Point &p1,Point &p2){
	double d=(p2-p0)*(p1-p0);
	if(d>0.0)
		return 1;
	if(d<0.0)
		return -1;
	return 0;
}
bool inBox(Point &pi,Point &pj,Point &pk){
	return min(pi.x,pj.x)<=pk.x&&pk.x<=max(pi.x,pj.x)&&
			min(pi.y,pj.y)<=pk.y&&pk.y<=max(pi.y,pj.y);
}
bool segmentsIntersect(Point &p1,Point &p2,Point &p3,Point &p4){
	int d1=direction(p3,p4,p1),
		d2=direction(p3,p4,p2),
		d3=direction(p1,p2,p3),
		d4=direction(p1,p2,p4);
	if((d1*d2<0)&&(d3*d4<0))
		return true;
	if(d1==0&&inBox(p3,p4,p1))
		return true;
	if(d2==0&&inBox(p3,p4,p2))
		return true;
	if(d3==0&&inBox(p1,p2,p3))
		return true;
	if(d4==0&&inBox(p1,p2,p4))
		return true;
	return false;
}
#endif
