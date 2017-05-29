#include <stdio.h>
#include <stdlib.h>
#include "compare.h"
#include "mergesort.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[]={5,1,9,4,6,2,0,3,8,7},i;
	char *b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
	double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
	mergeSort(a,sizeof(int),0,9,intGreater);
	for(i=0;i<10;i++)
	    printf("%d ",a[i]);
	printf("\n");
	
	mergeSort(b,sizeof(char *),0,5,strLess);
	for(i=0;i<6;i++)
	    printf("%s ",b[i]);
	printf("\n");
	
	mergeSort(c,sizeof(double),0,9,doubleGreater);
	for(i=0;i<10;i++)
	    printf("%1.1f ",c[i]);
	printf("\n");
	return 0;
}
