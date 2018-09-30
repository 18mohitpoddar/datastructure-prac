#include<iostream>
using namespace std;
//using recursion
int fact(int a)
	{
	
	if(a==1)
	return 1;
	else
		return (a*fact(a-1));
	}
	
	//using iteration
	int fact1(int a)
	{int ft=1;
		for(int i=1;i<=a;i++)
		{
			ft=ft*i;
		}
		cout<<"fact using iteration is:"<<ft<<"\n";
	}
int main()
{
	int m,n,k;
	cout<<"enter the no.";
	cin>>n;
	m=fact(n);
	k=fact1(n);
	cout<<"fact using recursion is:"<<m;
}
