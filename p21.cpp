#include<iostream>
using namespace std;
int main()
{
	int m;
	cout<<"\nEnter the number of rows and Coloumns:";
	cin>>m;
	int mat[m][m],transpose[m][m];
	cout<<"\nEnter the elements of a matrix:\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>mat[i][j];
			
		}
	}
	cout<<"\n\tThe matrix is: \n\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\n\tTranspose of a matrix:\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			transpose[j][i]=mat[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<transpose[i][j]<<"\t";
		}
		cout<<"\n";
	}
	bool symmetric=true;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(transpose[i][j]!=mat[i][j])
				symmetric=false;
			break;
		}
	}
	if(symmetric)
	{
		cout<<"\nThe matrix is a Symmetric\n";
	}
	else
	{
		cout<<"\nNot Symmetric\n";
	}
}
