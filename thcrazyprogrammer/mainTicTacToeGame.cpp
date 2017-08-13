#include<iostream>
#include<conio.h>
#include<dos.h>
#include<process.h>
using namespace std;
char mat[3][3];
void table(void); //function to print the table
void welcome(void); //function for welcome screen

int main(){
	welcome();
	A: system("cls");
}
void welcome(void){
	textmode(80);
	textcolor(YELLOW);
	system("cls");
	cout<<"nnnnnttttWelcome To";
	sleep(2);
	cout<<"nnttttTic-Tac-Toe";
	sleep(1);
	cout<<"nnttt Game";
	sleep(1);
	cout<<"nnnnnnnnnttttPress any key to continue......!!";
	getch();
}
