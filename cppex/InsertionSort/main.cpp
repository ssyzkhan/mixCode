#include <iostream>
#include <vector>
#include <list>
#include "insertionsort.h"
#include <iterator>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[]={4,3,2,9,8,0,6,5,1,7},i;
	string b[]={"ChongQiang","ShangHai","BeiJing","XiangGang","AoMen","GuangZhou"};
	double c[]={8.5,3.4,1.7,0.5,8.6,7.9,1.5,2.3,9.1,3.8};
	
	insertionSort<int*>(a,a+10);
	
	/*   
	for(i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	*/
	copy(a,a+10,ostream_iterator<int>(cout, " "));
	cout<<endl;
	
	vector<string> vb = vector<string>(b,b+6);
	insertionSort<vector<string>::iterator,greater<string> >(vb.begin(),vb.end());
	copy(vb.begin(),vb.end(),ostream_iterator<string>(cout, " "));
	cout<<endl;
	
	list<double> lc = list<double>(c,c+10);
	insertionSort<list<double>::iterator,less<double> >(lc.begin(),lc.end());
	copy(lc.begin(),lc.end(),ostream_iterator<double>(cout, " "));
	cout<<endl;
	
	return 0;
}
