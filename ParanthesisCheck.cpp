#include<stdio.h>
#include<string.h>
#define SIZE 10
char A[SIZE];
int top=-1;
void Push(char x){
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
	char x=A[top--];
	printf("Popped:%c",x);
}

void CheckBalancedParanthesis(char exp[],int n){
  	int i=0;
  	int check=0;
  	for(i=0;i<n;i++){
  		if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{' )
  		{
  			Push(exp[i]);
		  }
		  else if(exp[i]==')' || exp[i]==']' || exp[i]=='}' ){
		  	Pop();
//		          if(top==-1 || it doesnt contain correct paranthesis){
//		          	check=1;
//				  }
//				  else{
//				  	Pop();
//				  }
		  	  }
		  }
   if(check==1){
   	printf("\nIt is  Balanced Expression");
   }
   else{
   	
   	printf("\nIt is not Balanced");
   }
}
int main(){
	
	char exp[10];
	gets(exp);
	CheckBalancedParanthesis(exp,strlen(exp));
	return 0;
}
