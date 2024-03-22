#include <stdio.h>
#include <stdlib.h>
//self referential structure
typedef struct node{
    int data;
	struct node *next;//pointer to node
}Node;
//taking head as a global a variable
Node *head=NULL;
void insert_at_head(int val){
	//creating a node;
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL){//if there are nodes there
		head=newNode;
	}
	else{
		newNode->next=head;
		head=newNode;
	}
	
}
void insert_at_tail(int val){
	Node *newNode=(Node *)malloc(sizeof(Node));
	newNode->data=val;
	newNode->next=NULL;
	Node *temp=head;
	if(head==NULL){
		head=newNode;
		return;
	}
	while(temp->next!=NULL){
		temp=temp->next;
	    }
	    temp->next=newNode;
}
void Delete_at_head(){
	if(head==NULL){
		printf("Linked list is empty and deletion is not possible");
	}
	else{
		Node *temp=head;
	    head=head->next;	
		free(temp);
		}
}
void delete_at_tail()
{
	if(head==NULL){//empty linked list
		printf("Linked list is empty\n");
	}
	else if(head->next==NULL){//linked list with single node case
		Node *delNode=head;
		head=NULL;
		free(delNode);
	}
	else{
		//Reach last but one node
		Node *temp=head;
		while(temp->next->next!=NULL){
		  temp=temp->next;
		}
	      Node *delNode=temp->next;
	      temp->next=NULL;
	      free(delNode);
	}

	
	
	
}
void display(){
	if(head==NULL){
		printf("No nodes to display\n");
	}
	else{
	Node *temp=head;
	
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}	
		
	printf("\n");	
	}
}
int main()
{
   int ch;
   //infinite loop
   while(1){
   	printf("Enter\n1.Insert at head\n2.Insert at tail\n3.Display\n4.Delete at head\n5.Delete at tail\nAny other to exit\n");
   	scanf("%d",&ch);
   	if(ch==1){
   		//implement insert at head
   	  int val;
   	  printf("Enter a value for the node to be inserted");
   	  scanf("%d",&val);
   	  insert_at_head(val);
   	  }else if(ch==2){
   	  	//implement insert at tail	
   	  	int val;
   	    printf("Enter a value for the node to be inserted");
   	     scanf("%d",&val);
   	   insert_at_tail(val);
   	  
	  }else if(ch==3){
	//implement display
	display();	
	}else if(ch==4){
		//implement delete at head
		
		Delete_at_head();
		
	}
	else if(ch==5){
		delete_at_tail();
	}
	else{
   		printf("Thank you for testing the code.");
   		break;
	   } 
	} 	
	
	
	
	
	
	
	
	
	
	
}
























