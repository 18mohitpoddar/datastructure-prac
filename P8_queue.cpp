#include<iostream>
using namespace std;

int ar[5];
int front=0,rear=-1;

template <class t>
void Enque(t data)
{
	if(front==4)
		cout<<"\nFULL";
	else
	{
		rear++;
		ar[rear]=data;
	}
}

void Deque()
{
	if(front==-1)
		cout<<"\nEMPTY";
	else
	{
		front++;
		int j=front-rear+1,m=1;
		if(j>=0)
		{
			cout<<"\nElement taken out = " << ar[front];
			for (int i = 0; i <=j; ++i)
			{
				ar[i]=ar[m];
				m++;
			}
			front=front-1;
			rear=rear-1;
		}
		else
		cout<<"\nEMPTY";
	}
}

void Display()
{
	if(rear!=-1)
	{
		cout<<"\nQueue -> ";
		for (int i=rear; i!=front; --i)
		{
			cout << ar[i] << "  ";
		}
		cout << ar[front] << "\n";
	}
}

int main()
{
	int choice=1, data=0;
	while(choice)
	{
		cout << "\n\n\n";
		for (int i = 0; i < 80; ++i)
		{
			cout << "-";
		}
		cout << "\n\tChoose your option :\n\n1. Enque\n\n2. Deque\n\n3. Display All\n\n Any other key to Exit\t:  ";
		cin >> choice;

		switch(choice)
		{
			case 1 :
				cout << "\nEnter a number you want to enter in the stack : ";
				cin >> data;
				Enque(data);
				break;

			case 2 :
				Deque();
				break;

			case 3 :
				Display();
				break;

			default :
				choice = 0;
				break;
		}
	}

	return 0;
}
