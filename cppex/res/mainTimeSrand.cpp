#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<ctime>
#define MAX 2
using namespace std;
int main(int argc, char* argv[]){
	srand((unsigned)time(NULL));
	/*
	for(int i=0;i<10;i++){
		printf("%d\n",rand());
		cout<<rand()%MAX<<endl;
	}
	*/
	int x = rand()%MAX;
	if(x==0)
		x=-1;
	cout<<x<<endl;	
		
}
