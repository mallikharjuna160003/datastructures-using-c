#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node1{
	int data;
	struct Node* next;
};
struct Node1* head;
struct Node *top;
void Push(struct Node **head){
	top=(*head);
	(*head)->next=top;
	
}
void Pop(){
	struct Node *temp=top;
	if(temp==NULL) return;
	if(temp->next!=NULL){
	top=top->next;
	free(temp);
	}
}
struct Node* Top(){
	return top;
}
void Print(){
	struct Node *temp=top;
	printf("List:");
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
}
void Insert(int x){
	struct Node1* newNode=(struct Node1*)malloc(sizeof(struct Node1));
	newNode->data=x;
	newNode->next=head;
	head=newNode;
	
}

void reverse(){
	struct Node1* temp=head;
	while(temp!=NULL){
		Push(temp->data);
		temp=temp->next;
	}
	while(temp!=NULL){
		struct Node1* newNode=Top();
		head=newNode;
		Pop();
		
	}
	
}
int main(){
	head=NULL;
	top=NULL;
	Insert(30);
	Insert(10);
	Insert(20);
	Print();
	
}
