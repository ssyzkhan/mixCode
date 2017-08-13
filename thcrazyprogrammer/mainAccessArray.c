#include<stdio.h>
void main(){
	int x,*y;
	int nums[]={4,53,44,785,124};
	for(x=0;x<5;x++){
		printf("naddress=%u",&nums[x]);
		printf(" element=%d",nums[x]);
	}
	printf("n");
	y=&nums[0];
	
	for(x=0;x<5;x++){
		printf("naddress=%u",y);
		printf(" element=%d",*y);
		y++;
	}
	return 0;
}
