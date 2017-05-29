#include <iostream>
#include<string>
#include<vector>
#include<list>
#include<iterator>
using namespace std;
#include "insertionSort.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a[]={5,1,9,4,6,2,0,3,8,7},i;
	string b[]={"ChongQing","ShangHai","AoMen","TianJin","Beijing","XiangGang"};
	double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
	vector<string> vb=vector<string>(b,b+6);
	list<double> lc=list<double>(c,c+10);
	
	insertionSort<int*,greater<int>>(a,a+10);
	copy(a,a+10,ostream_iterator<int>(cout, " "));
	cout << endl;
	
	insertionSort<vector<string>::iterator,less<string>> (vb.begin(),vb.end());
	copy(vb.begin(),vb.end(),ostream_iterator<string>(cout," "));
	cout<<endl;
    
    insertionSort<list<double>::iterator,less<double>>(lc.begin(),lc.end());
    copy(lc.begin(),lc.end(),ostream_iterator<double>(cout," "));
	cout<<endl;


	return 0;
}
