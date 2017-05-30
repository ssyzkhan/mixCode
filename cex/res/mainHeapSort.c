#include<stdio.h>
#include<stdlib.h>
#include"../utility/heapsort.h"
#include"../utility/compare.h"
int main(int argc, char** argv){
	int a[]={5,1,9,4,6,2,0,3,8,7},i;
	char *b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
	double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
	heapSort(a,sizeof(int),10,intGreater);
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	
	heapSort(b,sizeof(char*),6,strLess);
	for(i=0;i<6;i++)
		printf("%s ",b[i]);
	printf("\n");
	
	heapSort(c,sizeof(double),10,doubleGreater);
	for(i=0;i<10;i++)
		printf("%1.1f ",c[i]);
	printf("\n");
	return (EXIT_SUCCESS);
}
