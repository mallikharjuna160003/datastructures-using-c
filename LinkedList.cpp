#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
};

void insert_beg(struct Node** head,int data){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=(*head);
	(*head)=newNode;	
}
void insert_end(struct Node** head,int data){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	if(*head==NULL){
		(*head)=newNode;
		(*head)->next=NULL;
		return;
	}
	else{
		struct Node* temp=*head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newNode;
		
	}
    return;
}
void insert_after(struct Node** head,int targetdata,int data){
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	struct Node* temp;
	if((*head)->data==targetdata){
		temp=(*head)->next;
		(*head)->next=newNode;
		newNode->next=temp;
		
	}
	else{
		temp=(*head);
		while(temp->data!=targetdata){
			temp=temp->next;
		}
		struct Node *temp1;
		temp1=temp->next;
		temp->next=newNode;
		newNode->next=temp1;
	}
	return;
}
void search(struct Node **head,int sdata){
	if((*head)->data==sdata){
		printf("\nFound!!!");
	}
	else if((*head)->next!=NULL){
		int found=0;
		struct Node* temp=(*head);
		while(temp!=NULL){
			if(temp->data==sdata){
				found=1;
				break;
			}
		   temp=temp->next;
		    
		}
		if(found==1){
			printf("\nFound");
		}
		else{
			printf("\nNot Found");
		}
		
	}
	
}
void nthpositionstruct(struct Node **head,int pos,int data){
	struct Node* temp=(*head);
	int count=1;
	struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=data;
	newNode->next=NULL;
	
	int check=0;
	if(pos==1){
		newNode->next=(*head);
		(*head)=newNode;
		check=1;
	}
	else{
		struct Node *temp2;
	while(temp!=NULL){
		count++;
		if(count==pos){
			newNode->next=temp->next;
			temp->next=newNode;
			check=1;
	}
	temp=temp->next;

	}
}

	if(check==0){
		printf("\nposition out of range\n");
	}
	
}
void deletenth(struct Node **head,int pos){
	if((*head)==NULL){
		printf("Can't delete Empty list");
		return;
	}
	else if((*head)->next!=NULL){
		if(pos==1){
		struct Node* temp=(*head);
		(*head)=(*head)->next;
		free(temp);	
	   }
	   else{
	   	int count=1;
	   	struct Node* temp=(*head);
	   struct Node*temp1;
	   	while(temp!=NULL){
	   		  count++;
	   		  
	   		  if(count==pos){
	   		  	  
	   		  	temp1=temp->next;
	   		  	temp->next=temp->next->next;
	   		  	free(temp1);
				 }
	   		temp=temp->next;
		   }
	   }
	}
	else if((*head)->next==NULL){
		printf("Can't  delete head node");
		return;
	}
	
}
//void reverlist(struct Node** head){
//	struct Node*current=(*head);
//	struct Node *prev=NULL;
//	struct Node* next;
//	while(current!=NULL){
//		next=current->next;
//		current->next=prev;
//		prev=current;
//		current=next;
//		 
//	}
//	(*head)=prev;
//}
//void reverlist(struct Node** head){
//	struct Node *temp=(*head);
//	if(temp->next==NULL){
//		(*head)=temp;
//		 return;
//	}
//	
//	reverlist(&(temp)->next);
//	struct Node *temp1=temp->next;
//	temp1->next=temp;
//	temp->next=NULL;
//	
//}


void display(struct Node **head){
	struct Node *temp=(*head);
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
}
void PrintRec(struct Node **head){
	struct Node *temp=(*head);
	if(temp!=NULL){
		
		PrintRec(&(temp)->next);
		printf("%d->",temp->data);
	}
}
//void PrintRec(struct Node **head){
//	struct Node *temp=(*head);
//	if(temp==NULL){
//		return;
//	}
//	PrintRec(&(temp)->next);
//	printf("%d->",temp->data);
//	
//}
void PrintRev(struct Node**head){
		struct Node *temp=(*head);
	if(temp!=NULL){
		printf("%d->",temp->data);
		PrintRec(&(temp)->next);
		
	}
}
int main(){
	struct Node* head=NULL;
	insert_beg(&head,12);
    insert_end(&head,13);
    insert_end(&head,15);
    insert_end(&head,11);
    display(&head);
    search(&head,2);
    nthpositionstruct(&head,4,10);
    display(&head);
    deletenth(&head,5);
    printf("\n");
    display(&head);
    reverlist(&head);
    display(&head);
    printf("\n");
    PrintRec(&head);
    PrintRev(&head);
    //display(&head);
	return 0;
}
