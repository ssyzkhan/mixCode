#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int bineary_search(int *a,int p,int r,int v);
int main(int argc, char** argv){
	int a[]={5,13,14,15,16,17,18,19,29,30},i;
	int v=5;
	int result;
	result=bineary_search(a,0,9,v);
	printf("%d\n",result);
}

int bineary_search(int *a,int p,int r,int v){
	
	if(p>r)
		return -1;
	int q;
	q=(p+r)/2;
	//printf("a%d\n",q);
	//printf("%d\n",a[q]);
	if(a[q]==v)
		return q;
	if(v<a[q]){
		return bineary_search(a,p,q-1,v);
	}else{
		return bineary_search(a,q+1,r,v);
	}		
}
	
	
	
