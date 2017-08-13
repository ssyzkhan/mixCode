#include<stdio.h>
#include<conio.h>
void main(){
	char name[]="TheCrazyProgrammer";
	int x=0;
	
	while(x<18){
		printf("%c",name[x]);
		x++;
	}
	printf("\n");
	/*
	while(name[x]!=''){
		printf("%c",name[x]);
		x++;
	}
	*/
	char *p;
	p=name;
	printf("%s",p);
	
	printf("Enter one wordn");
	puts(name);
	printf("%sn",name);
	
	char ch1,ch2,ch3;
	ch1=getch();
	ch2=getche();
	ch3=getchar();
	printf("%c %c %cn",ch1,ch2,ch3);
	return 0;
}
