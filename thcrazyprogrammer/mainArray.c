#include<stdio.h>
void main(){
	int x[5];
	int i;
	printf("Enter the values in an array n ");
	for(i=0;i<5;i++)
		scanf("%d",&x[i]);
	for(i=0;i<5;i++)
		printf("n %d ",x[i]);
}
