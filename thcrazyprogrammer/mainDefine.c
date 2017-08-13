#include<stdio.h>
#define WORK
int main(){
	printf(" Hello! Lets learn conditional compilation");
	#ifdef WORK
		printf("This will now work");
	#endif
	return 0;
}
