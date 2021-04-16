#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int top=-1;
char A[SIZE];
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
	//printf("Popped:%c",x);
}
void Print(){
	int i;
	printf("\nStack: ");
	for(i=0;i<=top;i++){
		printf("->%c",A[i]);
	}
	printf("\n");
}
void IsEmpty(){
	if(top==-1){
		printf("\nEmpty List");
	}
}
char Top(){
	return A[top];
}
void Reverse(char Name[],int n){
	int i=0;
	for(i=0;i<=n-1;i++){
		Push(Name[i]);
		//printf("\nTop Element:%c",A[top]);
	}
	for(i=0;i<=n-1;i++){
		Name[i]=Top();
		Pop();
	}
	
	
}
int main(){
	char Name[13];
	printf("Enter a String:");
	gets(Name);
	Reverse(Name,strlen(Name));
	printf("Output:%s",Name);
	return 0;
}
