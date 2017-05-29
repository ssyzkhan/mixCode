#include<stdlib.h>
#include"../utility/hanoi.h">
int main(int argc, char** argv){
	char current[]={'A','A','A','A'};
	char A='A',B='B',C='C';
	hanoi(current,4,A,B,C);
	return (EXIT_SUCCESS);
}
