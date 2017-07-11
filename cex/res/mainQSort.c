#include<stdio.h>
#include<stdlib.h>
#include"../utility/compare.h"
int main(){
	int a[]={5,1,9,4,6,2,0,3,8,7},i;
	char *b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
	double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
	
	qsort(a,10,sizeof(int),intGreater);
	
	for(i=0;i<10;i++)
		printf("%d ", a[i]);
	printf("\n");
}
