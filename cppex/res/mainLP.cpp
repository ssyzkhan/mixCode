#include<iostream>
#include"..\dataStruct\lp.h"
using namespace std;

int main(){
	double a[]={1, 1, 1, 0, 0, 1};
	double b[]={20, 12, 16};
	double c[]={18, 12.5};
	Lp *lp=new Lp(a,b,c,2,3);
	lp->simplex();
}
