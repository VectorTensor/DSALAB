
#include <stdbool.h>
#include <stdio.h>
#define MAX 5
int front=0;
int rear =-1;
int queue[MAX];
void enqueue(){
	if (rear==MAX-1){
		printf("Queue is full\n");
	
	}
	else{
		int n;
		rear++;
		printf("Enter data \n");
		scanf("%d",&n);
		queue[rear]=n;
	}
}
void dequeue(){
	if(rear < 0){
		printf("Queue empty\n");

	}
	else{
		int x;
		x=queue[0];
		for(int i=0;i<rear;i++){
			queue[i]=queue[i+1];
		}
		printf("%d\n",x);
		rear --;
	}
}
void display(){
	for (int i =front;i<=rear;i++){
		printf("%d\n",queue[i]);
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
