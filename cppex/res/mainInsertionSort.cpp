#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<iterator>
using namespace std;
#include"../utility/insertionsort.h"
int main(int argc, char** argv){
	int a[]={0,1,2,3,4,5,6,7,8,9},i;
	
	insertionSort(a,10);
	for(i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
