#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};
struct Node* head;
void Insert(int x){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	(*temp).data = x;
	(*temp).left = head;
	(*temp).right = NULL;
	head = temp;
}
void Print(){
	struct Node* temp = head;
	printf("List is: ");
	while(temp != NULL){
		printf("%d ",(*temp).data);
		temp = (*temp).left;
		
	}	
	printf("\n");
	
	
}
int main(){
	head = NULL;
	printf("How many number?\n ");
	int x,n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("Input the number: \n");
		scanf("%d",&x);
		Insert(x);
		Print();
	}
	

}
