#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node* head;
void begininsert();
int main()
{
	begininsert(5);
		begininsert(3);
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
