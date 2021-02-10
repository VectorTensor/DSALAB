#include <stdio.h>
#include <stdbool.h>

#define max_size 3


int bottom=0;
int stack[max_size];


void push(){
	if (bottom==max_size){
		printf("THe stack is full \n");

	}
	else{
		for (int i =bottom;i>0;i--){
			stack[i]=stack[i-1];
		
		}
		int x;
		printf("Enter data \n");
		scanf("%d",&x);
		stack[0]=x;
		bottom++;
	}

}
void pop(){
	if(bottom == 0){
		printf("The stack is empty\n");
		
	}
	else{
		int item = stack[0];
		for(int i=0;i<bottom;i++){
			stack[i]=stack[i+1];
		}
		bottom--;
		printf("The poped data is %d",item);
	}

}
void display(){	
	for (int i =0; i<bottom;i++){
		printf("%d \n",stack[i]);
	}


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











