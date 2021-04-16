#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
};
struct Node *head;
struct Node* GetNewNode(int x){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=x;
	newNode->next=NULL;
	newNode->prev=NULL;
	return newNode;
}
void InsertAtHead(int x){
  struct Node* newNode= GetNewNode(x);
  if(head==NULL){
  	head=newNode;
  	return;
  }
  head->prev=newNode;
  newNode->next=head;
  head=newNode;
}
void Print(){
	struct Node *temp=head;
	printf("List:");
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void ReversePrint()
{   struct Node* temp=head;
	if(temp==NULL) return;
	//Going to last Node
	while(temp->next!=NULL){
		temp=temp->next;
	}
	//Traversing backward using prev pointer
	printf("Reverse List:");
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->prev;
	}
	printf("\n");
}
int main(){
	head=NULL;//empty list
	InsertAtHead(12);
	InsertAtHead(121);
	InsertAtHead(129);
	InsertAtHead(123);
	Print();
	ReversePrint();
}
