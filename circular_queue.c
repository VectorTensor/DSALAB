#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
# define MAX_SIZE 3
struct queue{
	int data[MAX_SIZE];
	int rear;
	int front;
	
};
typedef struct queue NODE ;
void Enqueue(NODE *q){
	int data;
	if ((q->rear == MAX_SIZE-1 && q->front == 0  )|| q->rear == q->front-1){
		printf("The stack is full ");
	}
	else{
		if(q->rear==-1 && q->front ==-1){
			q->rear=0;
			q->front =0;
			
			printf("Enter the data:");
			scanf("%d",&data);
		
			q->data[q->rear]=data;
			//printf(q->data[q->rear]);
		}
		else{
			q->rear=(q->rear+1)%MAX_SIZE;
			printf("Enter the data:");
			scanf("%d",&data);
			
			q->data[q->rear]=data;
			
		}
	}
}

void dequeue(NODE  *q){
	int data;
	if(q->front ==-1 && q->rear ==-1 ){
		printf("The stack is empty \n");
		
	}
	else{
		if (q->front == q->rear){
			data=q->data[q->front];
			q->front=-1;
			q->rear=-1;
			printf("%d\n",data);
		}
		else{
			data= q->data[q->front];
			q->front = (q->front + 1)% MAX_SIZE;
			printf("%d\n",data);
		}
	}
}
void display(NODE *q)
     {
		int i;
        if (q->rear>=q->front)
    	for (i=q->front;i<=q->rear;i++)
    	printf("%d\n",q->data[i]);
    	else
		 	{
            for(i=q->front;i<MAX_SIZE;i++){
                printf("%d\n",q->data[i]);
            }
                    for (i=0;i<=q->rear;i++){
                    	printf("%d\n",q->data[i]);
                    }
				
			}
    	}

int main(){
	NODE *q;
	q= (NODE *) malloc(sizeof(NODE));
	q->front=-1;
	q->rear=-1;
	bool loop =true;

	int n;
	char a;
	do{
		printf("1.Enqueue 2.Dequeue 3.Display\n");
		scanf("%d",&n);
		switch(n){
			case 1: Enqueue(q);
					break;
			case 2:dequeue(q);
					break;
			case 3:display(q);
					break;
			default:printf("error input \n");
		}
		printf("Do you want to continue(y/n)\n");
		scanf(" %c",&a);
		if(a=='y' || a=='Y'){
			loop=true;
		}		
		else{
			loop=false;

		}

	}while(loop);
}






















