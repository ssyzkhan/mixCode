#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node{
	int data;
	struct Node* next;
};
struct Node* head;
void Insert(int x){
	struct Node* temp = (Node*)malloc(sizeof(Node));
	(*temp).data = x;
	(*temp).next = head;
	head = temp;
}
void Print(){
	Node* temp = head;
	printf("List is: ");
	while(temp != NULL){
		printf("%d", (*temp).data);
		temp = (*temp).next;
	}
	printf("\n");
}
int main()
{
	head = NULL;
	int n,x;
	printf("How many numbers? \n");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%x",&x);
		Insert(x);
		Print();
	}
}