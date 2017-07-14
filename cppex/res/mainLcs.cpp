#include "../utility/lcs.h"
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;
int main(int argc, char** argv){
	char *x = "ACCGGTCGAGTGCGCGGAAGCCGGCCGAA", *y="GTCGTTCGGAATGCCGTTGCTCTGTAAA";
	int *c, a[]={389,207,155,300,299,170,158,65},b[]={389,300,299,207.170,158,155,65};
	c=lcsLength(x,y,29,28);
	printLcs(c,28,x,y,29,28);
	cout<<endl;
	
	c=lcsLength(a,b,8,8);
	printLcs(c,8,a,b,8,8);
	cout<<endl;
	delete []c;
	return (EXIT_SUCCESS);
}
