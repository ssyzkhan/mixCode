#include<stdlib.h>
#include<stdio.h>
#include"../utility/swap.h"
int main(){
	int x,y;
	x=1;
	y=2;
	swap(&x,&y,sizeof(int));
	printf("%d ____ %d ",x,y);
}
