#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* head;
struct Node* Insert(int x){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=x;
	newNode->next=head;
	head=newNode;
	return head;
	
}
void Print(struct Node* head){
	struct Node *temp=head;
	printf("List:");
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
}
int main(){
	head=NULL;
	int x,i,n;
	printf("\nEnter No of nodes:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("\nEnter No of node data:");
	scanf("%d",&x);
	head=Insert(x);
	printf("\n");
	Print(head);
}
	return 0;
}

