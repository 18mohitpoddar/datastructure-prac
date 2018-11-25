#include<iostream>
using namespace std;
int main()
{
	int m,n,size=0;
	cout<<"\nEnter the number of rows:";
	cin>>m;
	cout<<"\nEnter the number of Coloumns:";
	cin>>n;
	int mat[m][n];
	cout<<"\nEnter the elements of a matrix:\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>mat[i][j];
			
		}
	}
	cout<<"\n\tThe matrix is: \n\n";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}

	int res[3][m*n];
	size = 0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			
			if (mat[i][j] != 0) 
                {
                	res[0][size]=i;
					res[1][size]=j;
					res[2][size]=mat[i][j];
					size++;
				}
		}
	}
	
	cout<<"\n\tThe matrix is: \n\n";
	cout<<"i\tj\tvalue\n";
	for(int j=0;j<size;j++)
	{
		for(int i=0;i<3;i++)
		{
			cout<<res[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
}
