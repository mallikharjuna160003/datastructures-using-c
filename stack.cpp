#include<stdio.h>
#define SIZE 10
int A[SIZE];
int top=-1;
void Push(int x){
	if(top==SIZE-1){
	   printf("\nOverFlow");
	   return;}
	A[++top]=x;
}
void Pop(){
	if(top==SIZE-1){
	printf("\nUnderFlow");
	 return;
	   }
	int x=A[top--];
	printf("Popped:%d",x);
}
void Print(){
	int i;
	printf("\nStack: ");
	for(i=0;i<=top;i++){
		printf("->%d",A[i]);
	}
	printf("\n");
}
void IsEmpty(){
	if(top==-1){
		printf("\nEmpty List");
	}
}
void Top(){
	
	printf("\nTop Element:%d",A[top]);
	
}

int main(){
	IsEmpty();
	Push(10);
	Push(20);
	Push(30);
	Top();
	Print();
	Pop();
	Top();
	Print();
	
	return 0;
}
