#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node *top;
void Push(int x){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=x;
	newNode->next=top;
	top=newNode;
	
}
void Pop(){
	struct Node *temp=top;
	if(temp==NULL) return;
	if(temp->next!=NULL){
	top=top->next;
	free(temp);
	}
}
void Print(){
	struct Node *temp=top;
	printf("List:");
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
}

int main(){
	top=NULL;
	Push(10);
	Push(20);
	Push(30);
	Push(40);
	Print();
	return 0;
}
