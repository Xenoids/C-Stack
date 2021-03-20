#include <stdio.h> // buat semua library
#include <stdlib.h>
#include <string.h>
#define N 5

int stack[N];
int top = -1;

void push();
void pop();
void peektop();
void display();

int main()
{

	while(1)
	{
		int choice;	
		printf("Welcome to the Stack Static [Array] Operations!\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Peek\n");
		printf("4. Display\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			push();
			break;
			
			case 2:
			pop();
			break;
			
			case 3:
			peektop();
			break;
			
			case 4:
			display();
			break;
			
			default:
			printf("Invalid Input\n\n");
		}
	}
	return 0;
}

void push()
{
	int x;
	printf("enter data :");
	scanf("%d",&x);
	if(top == N-1) printf("OverFlow\n");
	else{
		top++;
		stack[top] = x;
	}
	printf("\n");
}

void pop()
{
	int item;
	if(top == -1) printf("No data!\n\n");
	else
	{
		item = stack[top];
		top--;
		printf("popped top value : %d\n\n",item); // print pop
	}
}

void peektop()
{
	if(top == -1) printf("No data!\n\n");
	else
	{
		printf("current top value : %d\n\n",stack[top]);
	}
}

void display()
{
	if(top == -1) printf("No data!\n\n");
	
	else{
		
	for(int i=top;i>=0; i--)
	{
		printf("%d\n",stack[i]);
	}
		printf("\n");
	}
}

