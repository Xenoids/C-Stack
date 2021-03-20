#include <stdio.h> // buat semua library
#include <stdlib.h>
struct node{
	int data;
	node* link;
}*top;

node* createNode(int data)
{
	node* temp;
	temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->link = top;
}

void push(int data)
{
	node* newnode = createNode(data);
	top = newnode;
}

void display()
{
	if(top == NULL) printf("No data!");
	else{
		node* temp;
		temp = top;
		while(temp != NULL)
		{
			printf("%d\n",temp->data);
			temp = temp->link;
		}
	}
}

void peek()
{
	if(top == NULL) printf("No data!");
	else
	{
		printf("top element is %d\n",top->data);
	}	
}

void pop()
{
	if(top == NULL) printf("No data!");
	else{
	node* temp;
	temp = top;
	printf("element get popped %d\n\n",top->data);
	top = top->link; 
	free(temp);
	}
}

int main()
{
	push(3);
	push(4);
	push(5);
	display();
	pop();
	display();
	//peek();
	return 0;
}

