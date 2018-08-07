#include<stdlib.h>
#include<stdio.h>
struct node{
	int data;
	struct node* next;
}*head;
void insertbeginelement();
void showdata();
void insertafter5();
void insertatnd();
int main()
{
	//insertbeginelement(3);
	//insertbeginelement(4);
	insertbeginelement(5);
	insertafter5(8);
	insertatend(20);
	showdata();
}
void insertbeginelement(int a)
{
	struct node*p=(struct node*)malloc(sizeof(struct node*));
if(p==NULL)
{
	printf("overflow");
	}	
	else
	{
	
		p->data=a;
	//	printf("%d",p->data);
		
		p->next=head;
		head=p;
		printf("\n 1 node inserted at beginning");
}

	
}
void insertafter5(int b)
{
	struct node*p1=(struct node*)malloc(sizeof(struct node*));
	while(head->data!=5)
	head=head->next;
	if(head->data==5)
	{
		p1->next=head->next;
		p1->data=b;
		head->next=p1;
		printf("\n 1 node inserted after node with data 5");
	}
	
	
}
void insertatend(int z)
{
	struct node *t=head;
		struct node*p2=(struct node*)malloc(sizeof(struct node*));
     if(t==NULL)
     {
	 printf("\n your newly added node is ist node");}
     else
     while(t->next!=NULL)
    {
 		t=t->next;
 }
	 p2->data=z;
     p2->next=NULL;
     t->next=p2;
     
		printf("\nend node inserted");


}
void showdata()
{
	struct node*d;
	d=head;
	printf("\n the linked list is as");
	while(d!=NULL)
	{
		printf("\n its %d ",d->data);
		d=d->next;
	}
	printf("\n this is our made linked list");
}
