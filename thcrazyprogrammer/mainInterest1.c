#include<stdio.h>
#include<stdlib.h>
void main(){
	float p,r,t,si;
	system("cls");
	printf("Enter principal, rate and time;");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("nSI=%f",si);
	
}
