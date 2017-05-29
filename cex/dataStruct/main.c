#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listInsertionSort.h"
#include "compare.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void Print(int *a, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
	printf("\n");
}
int main(int argc, char *argv[]) {
	int A[]={5,1,9,4,6,2,0,3,8,7};
	char B[]={'B','A','C','Z','X'};
	char** C[]={"Beijing","Guangdong","Hongkong","Fujian"};
	struct Node *a, *b, *c, *t;
	
	c=builtList(C,4,sizeof(char**));
	listInsertionSort(c,sizeof(char**),strLess);
	
	t=c;
	while(t!=NULL){
		printf("%s  ",*((char**)(t->data)));
		t=t->next;
	}
	printf("\n");
	
	b=builtList(B,5,sizeof(char));
	listInsertionSort(b,sizeof(char),intLess);
	t=b;
	while(t!=NULL){
		printf("%c  ",*((char*)(t->data)));
		t=t->next;
	}
	printf("\n");
	
	
	a=builtList(A,10,sizeof(int));
	listInsertionSort(a,sizeof(int),intLess);
	t=a;
	while(t!=NULL){
		printf("%d  ",*((int*)(t->data)));
		t=t->next;
	}
	printf("\n");
	//Print(A,10);
	return 0;
}
