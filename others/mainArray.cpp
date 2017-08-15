#include<cstdlib>
#include<cstdio>

int main(){
	int a[]={2,3,1,4},*iterator,i;
	for(i=0,iterator=a;i<4;i++,++iterator){	
		printf("%d ", &a[i]);
		printf("%d ", *iterator);
	}
	printf("\n");
}
