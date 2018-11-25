#include<iostream>
using namespace std;
#define n 5
char queue[n];
	int front=-1,rear=-1;
void qinsert(char item)
{
	//int item;
	if(rear==n-1&&front==0||front==rear+1)
	{
		cout<<"overflow";
	}
	else
	{
		if(front==-1)
		{
			front=0;
			rear=0;
		}
		else if(rear==n-1)
		{
			rear=0;
		}
		else 
		rear=rear+1;
		
	}
	queue[rear]=item;
}
void qdelete(char item)
{
	if(front==-1)
	{
		cout<<"queu is empty";
	}
	else
	{	item=queue[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else if(front==n-1)
		{
			front=0;
		}
		else
		front=front+1;
	}
}
void display()
{
	for(int i=0;i<=5;i++)
	{
		cout<<queue[i];
	}
}
int main()
{	
	qinsert('a');
	qinsert('b');
	qinsert('c');
	display();
	cout<<"\n"<<"-------";
	qdelete('a');
	display();
	cout<<"\n"<<"-------";
	qinsert('d');
	qinsert('e');
	qdelete('b');
	qdelete('c');
	qinsert('f');
	display();
	cout<<"\n"<<"-------";
	
	
	
}
