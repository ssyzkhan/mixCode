/*Program to calculate simple interest
theCrazyProgrammer date 21/12/14*/

#include<stdio.h>
#include<stdlib.h>
void main(){
	int p,n; //Here p is principle amount and n is number of years
	float r,si; //Here r is rate of interest and si is simple interest
	system("cls");
	printf("Enter the values of p,n and r\n");
	scanf("%d%d%f",&p,&n,&r);
	si=(p*n*r)/100;
	printf("Simple interest is %f",si);
}
