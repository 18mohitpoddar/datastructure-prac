#include<iostream>
#include<stdio.h>
#define size 10
using namespace std;
int top=-1;int stack[size];
//insertion
int push(int x)
{
	if(top==size-1)
	{
		printf("stack is overflow");
		return 0;
	}
	else
	{
		top++;
		stack[top]=x;
		return x;
	
	}
}
//deletion
int pop()
{
	if(top==-1)
	{
		printf("stack underflow");
		return 0;
	}
	else
	{
		int y=stack[top];
		top--;
		return y;
	}
}

int main()
{
	//inserting elements
printf("%d pushed into stack\n",push(5));
printf("%d pushed into stack\n",push(21));

printf("%d pushed into stack\n",push(7));
printf("%d pushed into stack\n",push(54));
//deleting elements
printf("%d popped from stack\n",pop());
printf("%d popped from stack\n",pop());
printf("%d popped from stack\n",pop());
printf("%d popped from stack\n",pop());
return 0;
}
