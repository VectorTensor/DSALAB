#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5
int top=-1;
int stack[MAX_SIZE];
void push(){
	if (top==MAX_SIZE-1){
		printf("The stack is full");
		return;
	}
	else{
		int x;
		top++;
		printf("Enter data \n");
		scanf("%d",&x);
		stack[top]=x;
		return ;
	}




}

void pop(){
	if(top==-1){
		printf("The stack is empty \n");
		return;
	}
	else{
		int x;
		x= stack[top];
		top--;
		printf("%d\n",x);
		return;
	}
}
void display(){
	if(top==-1){
		printf("The stack is empty \n");
		return;
	}
	else{
		for (int i=0;i<=top;i++){
			printf("%d \n",stack[i]);
		}
	}
}
int main(){
	int n;
	char a;
	bool loop=true;
	while(loop){
		printf("1.push   2.pop   3.display \n");
		scanf("%d",&n);
		switch(n){
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;

			default:printf("Invalid input \n");
				
		}
		printf("Do you want to continue (y/n)\n");
		scanf(" %c",&a);
		if (a=='y'||a=='Y'){
			loop=true;
		}
		else{
			loop =false;
		}
	}

		
	return 0;

}
