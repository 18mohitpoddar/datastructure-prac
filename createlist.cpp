#include<iostream>
#include<stdlib.h>
using namespace std;
int n;
struct node
{
	int data;
	struct node*next;
}*head;
void createlist(int n)
{	int y,dt;
	struct node *p1,*p;
	cout<<"enter ist node's data";
	cin>>y;
	{
		head=(struct node*)malloc(sizeof(struct node));
		head->data=y;
		head->next=NULL;
	}
	p=head;
	for(int i=2;i<=n;i++)
	{cout<<"enter data";
	cin>>dt;
		p1=(struct node*)malloc(sizeof(struct node));
		p1->data=dt;
		p1->next=NULL;
		p->next=p1;
		p=p->next;
	}
}
void showall()
{
	while(head->next!=NULL||head->data!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}
}
int main()
{//int n;
	cout<<"enter size of linked list";
	cin>>n;
	createlist(n);
	showall();
}
