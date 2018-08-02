#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node* head;
void begininsert();
void begindelete();
int main()
{
	begininsert(5);
		begininsert(3);
		begindelete();
}
void begininsert(int x)
{
	struct node* ptr;
	
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
		printf("already 1st node");
	}
	else
	{
		ptr->data=x;
		ptr->next=head;
		head=ptr;
		printf("\n%d",head->data);
		printf("\n your node inserted");
	}
}
void begindelete()
{struct node*ptr1;
	if(head==NULL)
	{
		printf("\n empty node");
	}
	else
	{
		ptr1=head;
		head=ptr1->next;
		free(ptr1);
		printf("\n--first node deleted");
	}
}
