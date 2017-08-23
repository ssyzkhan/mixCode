#include<iostream>
#include"..\dataStruct\lp.h"
using namespace std;

int main(){
	double a[]={-2,-7.5,-3,20,5,10};
	double b[]={-10000,30000};
	double c[]={1,1,1};
	Lp *lp=new Lp(a,b,c,3,3);
	lp->simplex();
}
