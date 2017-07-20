#include<stdio.h>
#include<stdlib.h>
struct List{
	int data;
	struct List *next;
};
typedef struct List List;
void Insert(List **l, int x);
void Print(List **l);
int main(){
	List *head;
	head=NULL;
	printf("How many numbers?\n");
	int n,i,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Input a number.\n");
		scanf("%d",&x);
		Insert(&head,x);
		Print(&head);
	}	

	
}
void Insert(List **l, int x){
	List *temp=(List*)malloc(sizeof(List));
	temp->data=x;
	temp->next=*l;
	
	*l=temp;
}
void Print(List **l){
	List *p=(List*)malloc(sizeof(List));
	p=*l;
	printf("List is: \n");
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
