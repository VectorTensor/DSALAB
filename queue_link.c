#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>
struct node{
	int data;
	struct node * next;
};
struct node * front;
struct node * rear;

void enqueue(){
	struct node *newnode;
	newnode=(node *)malloc(sizeof(struct node));
	int x;
	printf("Enter data\n");
	scanf("%d",&x);
	newnode->data=x;
	if (rear==NULL){
		rear=newnode;
		front = newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}

}
void dequeue(){
	int x;
	if (front==NULL){
		printf("The queue is empty\n");
	}
	else{
		x=front->data;
		front=front->next;
		printf("The dequeued item is %d\n",x);
	}
}
void display(){
	struct node * temp;
	temp=front;
	int x;
	while(temp!=NULL){
		x= temp->data;
		printf("%d\n",x);
		temp=temp->next;
	}
}
int main(){
		
	bool loop =true;

	int n;
	char q;
	do{
		printf("1.Enqueue 2.Dequeue 3.Display\n");
		scanf("%d",&n);
		switch(n){
			case 1: enqueue();
					break;
			case 2:dequeue();
					break;
			case 3:display();
					break;
			default:printf("error input \n");
		}
		printf("Do you want to continue(y/n)\n");
		scanf(" %c",&q);
		if(q=='y' || q=='Y'){
			loop=true;
		}		
		else{
			loop=false;

		}

	}while(loop);
	return 0;

}
















