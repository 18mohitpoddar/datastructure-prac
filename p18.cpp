#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Give dimension 'n' of a array: \n";
	cout<<"Enter value of 'n': ";
	cin>>n;
	int a[n];

	cout<<"Enter values of array: \n\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\tEnter element "<<i+1<<": ";
		cin>>a[i];
	}
	cout<<"\n\nArray given is:\n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}

	cout<<"\n\nNew Array becomes: \n";
	int d[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				d[i][j]=a[i];
				cout<<" "<<d[i][j];
			}
			else
			{
				d[i][j]=0;
				cout<<" "<<d[i][j];
			}
		}
		cout<<"\n";
	}
}
