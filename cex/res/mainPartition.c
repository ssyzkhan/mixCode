#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../utility/compare.h"
#include"../utility/partition.h"
int main(int argc, char** argv){
	int a[]={1,2,5,8,9,0,3,4,6,7},i,j;
	char *b[]={"AoMen","BeiJing","ShangHai","ChongQing","TianJin","XiangGang"};
	double c[]={0.5,3.7,6.3,8.5,9.2,1.7,2.3,4.1,5.9,7.4};
	j=partition(a,sizeof(int),0,9,intGreater);
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
	printf("\n%d\n",j);
	
	j=partition(b,sizeof(char *),0,5,strLess);
	for(i=0;i<6;i++)
		printf("%s  ", b[i]);
	printf("\n%d\n",j);
	
	j=partition(c, sizeof(double),0,9,doubleGreater);
	for(i=0;i<10;i++)
		printf("%1.1f  ",c[i]);
	printf("\n%d\n", j);
	return (EXIT_SUCCESS);
}
