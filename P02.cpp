#include<iostream>
using namespace std;
void selection_sort(int ar[],int size)
{
for(int i=0;i<size;i++)
{
	for(int j=i+1;j<size;j++)
	{
		if(ar[j]<ar[i])
		{
			int temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
		}
	}
}
for(int i=0;i<size;i++)
{
	cout<<ar[i]<<"\n";
}
}

void bubble_sort(int ar[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				int temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}

		}
	}
	for(int i=0;i<size;i++)
{
	cout<<ar[i]<<"\n";
}
}

void insertion_sort(int ar[],int size)
{
	for(int i=1;i<size;i++)
	{
		for(int j=i-1;ar[i]<ar[j]&&j>=0;j++)
		{
			int temp=ar[j];
			ar[j]=ar[i];
			ar[i]=temp;

		}
	}
	for(int i=0;i<size;i++)
{
	cout<<ar[i]<<"\n";
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
		cout<<"\n1.Bubble Sort\n2.Insertion Sort\n3.Selection Sort";
		cin>>choice;
		switch(choice)
		{
			case 1:
			bubble_sort(ar,size);
			break;
			case 2:
			insertion_sort(ar,size);
			break;
			case 3:
			selection_sort(ar,size);
			break;
			default:
			cout<<"\nInvalid Choice";
			break;


		}
		cout<<"\nDo you want to continue(y/n) ";
		cin>>ch;
}while(ch=='y'||ch=='Y');
}
