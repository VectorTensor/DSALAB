#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
struct node{
	int data;
	struct node *next;
};
struct node *top;
void push(){
	struct node * newnode;
	int x;
	newnode = (struct node *) malloc(sizeof(struct node));
	printf("Enter the data \n");
	scanf("%d",&x);
	newnode->data = x;
	newnode->next=top;
	top=newnode;
	
}
void pop(){
	struct node * temp;
	if (top==NULL){
		printf("The stack is empty \n");

	}
	
	else{
		temp=top;
		printf("the popped item is %d \n",top->data);
		top= top->next;
		temp->next=NULL;
		free(temp);
	}
}
void display(){
	struct node *temp;
	temp=top;
	int x;
	do{
		x= temp->data;
		printf("%d\n",x);
		temp=temp->next;
	}while(temp!=NULL);
}

int main(){	
	int n;
	bool loop=true;
	do{


	
		printf("1.push  2.pop  3.display\n");
		scanf("%d",&n);
		switch(n){
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			default: printf("Invalid input\n");
		}
	char q;
	printf("Do you want to continue (y/n)\n");
	scanf(" %c",&q);
	if(q=='y'||q=='Y'){
		loop=true;

	}
	else{
		loop=false;
	}
	}while(loop);

	return 0;
}



































