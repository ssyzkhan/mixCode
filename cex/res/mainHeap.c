#include<stdio.h>
#include<stdlib.h>
#include"../utility/heap.h"
#include"../utility/compare.h"
int main(int argc, char** argv){
	int h[]={4,1,3,2,16,9,10,14,8,7},i;
	buildHeap(h,sizeof(int),10,intGreater);
	printf("max heap: \n");
	for(i=0;i<10;i++)
		printf("%d ", h[i]);
	printf("\n");
	buildHeap(h,sizeof(int),10,intLess);
	printf("min heap: \n");
	for(i=0;i<10;i++)
		printf("%d ", h[i]);
	printf("\n");
	return (EXIT_SUCCESS);
}
