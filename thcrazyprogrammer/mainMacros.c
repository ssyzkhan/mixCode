//C program to calculate perimeter of circle

#include<stdio.h>
#define PERI(x) (2*3.14*x) //macro with argument

int main(){
	float r,per;
	printf("Enter radius of the circlen");
	scanf("%f",&r);
	per=PERI(r);
	printf("Perimeter of the circle is %f",per);
	
	return 0;
}
