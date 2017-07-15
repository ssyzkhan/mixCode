#ifndef _FLOYD_H
#define _FLOYD_H
#include<string.h>
#include<float.h>
#include<stdio.h>
#include<stdlib.h>
#include"../dataStruct/pair.h"
pair floydWarshall(double* w, int n){
	double *d=(double*)malloc(n*n*sizeof(double));
	int i,j,k,*pi=(int*)malloc(n*n*sizeof(int));
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			pi[i*n+j]=i;
	
	memcpy(d,w,n*n*sizeof(double));
	
	
	return make_pair((double*)d,(int*)pi);
	

}

#endif

