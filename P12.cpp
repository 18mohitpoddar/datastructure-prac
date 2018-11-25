#include<iostream>
using namespace std;
void fiboIteration(int n)
{
	cout<<"1";

	for(int i=1, j=1, k=0; i<n ; i++)
	{
		cout<<" "<<j+k;
		int t = k;
		k = j;
		j = t+j;
	}
}

int fiboRecursion(int j, int k,int x, int n)
{
	if(x==1 && n<2)
	{
		cout<<"1 ";
		return 1;
	}
	else if (x==1 && n>1)
	{
		fiboRecursion(1,1, 2, n);
	}
	else if(x==2)
	{
		cout<<"1 1";
		fiboRecursion(1, 1, x+1, n);
	}
	else if (x>n)
	{
		return 1;
	}
	else
	{
		cout<<" "<<j+k; 
		fiboRecursion(j+k, j, x+1, n);
		return 1;
	}
}
int main()
{
	int ch, n;
	cout<<"Menu:\n";
	cout<<"1. Fibbonacci series using iteration\n";
	cout<<"2. Fibbonacci series using recursion\n";
	cout<<"Enter your choice: ";
	cin>>ch;
	cout<<"\nEnter no. of terms: ";
	cin>>n;
	if(n>0)
	{
		switch(ch)
		{
			case 1: fiboIteration(n);
					break;
			case 2: fiboRecursion(1, 1, 1, n);
					break;
			default: cout<<"Wrong choice!!";
					 break;
		}
		cout<<"\n";
	}
}
