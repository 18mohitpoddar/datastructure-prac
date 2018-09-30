#include<iostream>
using namespace std;
int main()
{
 int ar[7];
 for(int i=0;i<=6;i++)
 {
 	cin>>ar[i];
 }
 //insertion sort
 for(int j=0;j<=6;j++)
 {
 	for(int k=0;k<=6;k++)
 	{
 		if(ar[j]<ar[k])
 	 {
 		int temp;
 		temp=ar[j];
 		ar[j]=ar[k];
 		ar[k]=temp;
	 }
	}
 }
 cout<<"your sorted array is"<<"\n";
 for(int i=0;i<=6;i++)
 {
 	cout<<ar[i];
 	cout<<"\n";
 }
}
