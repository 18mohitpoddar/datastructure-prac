#include<iostream>
#include<stdlib.h>
using namespace std;
template <class T>
struct node
{
	struct node *rp;
	struct node *lp;
	T data;
	
	void insertatbegin(T d);
	void insertafterx(T x,T d);
	void showall();
};
node<float> * head=NULL;
template <class T>
void node<T>::insertatbegin(T d)
{ 	
	struct node *p=(struct node*)malloc(sizeof(struct node));
	p->data=d;
	p->lp=NULL;
	if(head==NULL)
	{
		p->rp=NULL;
		head=p;
	}
	else
	{
		p->rp=head;
		head->lp=p;
		head=p;
	}
	
}
template <class T>
void node<T>::insertafterx(T x,T d)
{
	struct node *p1=(struct node*)malloc(sizeof(struct node));
	p1->data=d;
	struct node*t;
	t=head;
	while(t->data!=x)
	{
		t=t->rp;
	}
	if(t->data==x&&t->rp==NULL)
	{
		p1->rp=NULL;
		p1->lp=t;
		t->rp=p1;
		//p1->rp==NULL;
	}
	else if(t->data==x)//&&t->lp!=NULL&&t->rp!=NULL)
	{
		p1->rp=t->rp;
		p1->lp=t;
		t->rp=p1;
		t->rp->rp->lp=p1;
	}
	
	
}
template <class T>
void node<T>::showall()
{
	struct node *t9;
	t9=head;
	while(t9!=NULL)
	{
		cout<<t9->data;
		cout<<"\n";
		t9=t9->rp;
	}
}


int main()
{node<float> n1;
	float data;
	float x;
	n1.insertatbegin(8.9);
		n1.insertatbegin(5.99);
			n1.insertatbegin(1);
			n1.showall();
			cout<<"enter data of node after which u wanna insert";
		cin>>x;
		cout<<"enter new data u wanna insert";
		cin>>data;
			n1.insertafterx(x,data);
			cout<<"the final list is:";
	n1.showall();
}
