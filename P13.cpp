#include<iostream>
using namespace std;
void gcdIteration(int n1, int n2)
{
	int n = n1>n2?n2:n1;
	for(int i=n;i>=1;i--)
	{
		if(n1%i==0 && n2%i==0)
		{
			cout<<"GCD of two no. "<<n1<<" and "<<n2<<" is: "<<i;
			break;
		}
	}
}

int gcdRecursion(int n1, int n2, int x)
{
	if(n1%x==0 && n2%x==0)
	{
		cout<<"GCD of two no. "<<n1<<" and "<<n2<<" is: "<<x;
		return x;
	}
	else
		gcdRecursion(n1, n2, x-1);
	
}
int main()
{
	int ch, n1,n2;
	cout<<"Menu:\n";
	cout<<"1. GCD of 2 numbers using iteration\n";
	cout<<"2. GCD of 2 numbers using recursion\n";
	cout<<"Enter your choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1: cout<<"\nEnter no. 1: ";
				cin>>n1;
				cout<<"\nEnter no. 2: ";
				cin>>n2;
				if(n1>0 && n2>0)
					gcdIteration(n1,n2);
				else
					cout<<"No. should be greater than 0.";
				break;

		case 2: cout<<"\nEnter no. 1: ";
				cin>>n1;
				cout<<"\nEnter no. 2: ";
				cin>>n2;
				if(n1>0 && n2>0)
				{
					int n = n1>n2?n2:n1;
					gcdRecursion(n1,n2, n);
				}
				else
					cout<<"No. should be greater than 0.";
				break;

		default: cout<<"Wrong choice!!";
				 break;
	}
	cout<<"\n";
}
