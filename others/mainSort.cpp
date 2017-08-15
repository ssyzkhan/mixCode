#include<iostream>
#include<algorithm>
#include<vector>

int main(){
	int myints[]={10,20,30,40,50,60,70};
	std::vector<int> myvector(7);
	
	std::copy(myints,myints+7,myvector.begin());
	
	std::cout << "myvector contains: ";
	for(std::vector<int>::iterator it=myvector.begin();it!=myvector.end();++it)
		std::cout<<' ' <<*it;
	std::cout<<'\n';

	
}
