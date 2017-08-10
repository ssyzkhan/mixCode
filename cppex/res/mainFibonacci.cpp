#include<iostream>
using namespace std;
/*
int fib(int n){
	if(n<=0)
		return 0;
	if(n==1)
		return 1;
	return fib(n-1)+fib(n-2);
	
}

int fib(int n){
	int f,memo[n];
	if(n==1) return 1;
	if(n==2) return 1;

	memo[1]=1;
	memo[2]=1;
	
	for(int i=2;i<n;i++){
		memo[i]=memo[i-1]+memo[i-2];
	}
	return memo[n];
}
*/
int fib(int n){
	int f,memo[n];
	
	if(memo[n]<=100)
		return memo[n];
	if(n<=2)
		f=1;
	else
		f=fib(n-1)+fib(n-2);
	memo[n]=f;
	return f;
}
int main(){
	cout << fib(3)<<endl;
}
