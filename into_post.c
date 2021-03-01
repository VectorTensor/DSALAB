#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX_SIZE 5
char postfix[20];
int top=-1;
char stack[MAX_SIZE];
void push(char c){
	if (top==MAX_SIZE-1){
		printf("The stack is full");
		return;
	}
	else{
		
		top++;
//		printf("Enter data \n");
//		scanf(" %c",&x);
		stack[top]=c;
		
	}




}

char pop(){
	if(top==-1){
		printf("The stack is empty \n");
		return -1;
	}
	else{
		char  x;
		x= stack[top];
		top--;
	
		return x;
	}
}
void display(){
	if(top==-1){
		printf("The stack is empty \n");
		return;
	}
	else{
		for (int i=0;i<=top;i++){
			printf("%c \n",stack[i]);
		}
	}
}
int precedence(char c){
    if (c=='^'||c=='$'){
        return 3;
    }
    else if (c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else if(c=='('||c==')'){
        return 0;
    }

    else{
        return -1;
    } 
    
}

int main(){
	char infix[20],item;
	printf("Enter infix expression\n");
	gets(infix);
	int i=0,j=0,k=0;
	while(infix[i]!='\0'){
		if (infix[i]=='('){
			push(infix[i]);

		}
		else if(infix[i]==')'){
			while(stack[top]!='(')
				{item=pop();
				postfix[j]=item;
				j++;	
			}
			item=pop();
		}		
		else if(infix[i]>=48&&infix[i]<=57){
			postfix[j]=infix[i];	
			j++;
		}
		else{
			while(precedence(stack[top])>=precedence(infix[i])){
				item=pop();
				postfix[j]=item;
				j++;
			}
			push(infix[i]);
		}
		i++;
	}
	while(top !=-1){
		item=pop();
		postfix[j]=item;
		j++;
		
	}	
	while(postfix[k]!='\0'){
		printf("%c",postfix[k]);
		k++;
	}
	return 0;
}
