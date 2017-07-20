#include<iostream>
using namespace std;
struct List{
	int data;
	struct List *next;
};
List *head;
void Insert(int x);
void Print();
int main(){
	head=NULL;
	
	cout<<"How many numbers?"<<endl;
	int n,i,x;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Input a number"<<endl;
		cin>>x;
		Insert(x);
		Print();
	}
}
void Insert(int x){
	List *temp=new List();
	temp->data=x;
	temp->next=head;
	
	head=temp;
}
void Print(){
	List *p=new List();
	p=head;
	printf("List is: \n");
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
