#include <stdio.h>
#include <stdlib.h>
#include "hanoi.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char current[]={'A','A','A','A'};
	char A='A',B='B',C='C';
	hanoi(current,4,A,B,C);
	return 0;
}
