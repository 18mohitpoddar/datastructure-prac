#include<iostream>
using namespace std;



void linear_search(int ar[],int data,int size)
{
	int flag=0;;
	for(int i=0;i<size;i++)
	{
	if(ar[i]==data)
	{
	flag=1;
	}
	}
	if(flag==1){
		cout<<"\n\tElement Found";
	}
	else
	{
		cout<<"\n\tElement Not Found";
	}


	
	
}
void binary_search(int ar[],int data,int size)
{
	int l=0,u=size-1;
	int flag=0;
	if(u>=1)
	{
	int m=(l+u)/2;
	if(ar[m]==data)
	{
		flag++;
	
	}
	else if(ar[m]>data)
	{
		u=m-1;
		flag++;
	}
	else
	{
		l=m+1;
		flag++;
	}
	}
	if(flag>=1)
	{
		cout<<"\n\tElement is present";
	}
	else
	{
		cout<<"\n\tElement Not Found";
	}

}
int main()
{
	int size;
	char ch;	
	cout<<"\nEnter the size of an array:";
	cin>>size;
	int ar[size];
	cout<<"\nEnter the elements of an array";
	for (int i = 0; i < size; ++i)
	{
		/* code */cin>>ar[i];
	}
	cout<<"\nThe input array is:";
	for (int i = 0; i < size; ++i)
	{
		/* code */cout<<ar[i]<<"\n";
	}
	do
	{
		int choice,data;
		
		cout<<"\n1.Binary Search\n2.Linear Search\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			cout<<"\nEnter element to be searched:";
			cin>>data;
			binary_search(ar,data,size);
			break;
			case 2:
			cout<<"\nEnter element to be searched:";
			cin>>data;
			linear_search(ar,data,size);
			break;
			default:
			cout<<"\nInvalid Choice";
			break;

		}
		cout<<"\nDo you want to continue?(y/n)";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
}
