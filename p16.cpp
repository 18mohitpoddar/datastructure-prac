#include<iostream>
using namespace std;

  
#define MAX 100 
  
class Stack 
{ 
    int top; 
public: 
    int a[MAX];    //Maximum size of Stack 
  
    Stack()  { top = -1; } 
    bool push(int x); 
    int pop(); 
    bool isEmpty(); 
    void printStack();
}; 
  
bool Stack::push(int x) 
{ 
    if (top >= (MAX-1)) 
    { 
        cout << "Stack Overflow"; 
        return false; 
    } 
    else
    { 
        a[++top] = x; 
        //cout<<x <<" pushed into stack\n"; 
        return true; 
    } 
} 
  
int Stack::pop() 
{ 
    if (top < 0) 
    { 
        cout << "Stack Underflow"; 
        return 0; 
    } 
    else
    { 
        int x = a[top--]; 
        return x; 
    } 
} 
  
bool Stack::isEmpty() 
{ 
    return (top < 0); 
} 

void Stack::printStack()
{
	if(top>=0)
	{
		cout<<a[top];
		for(int i=top-1;i>=0;i--)
		{
			cout<<", "<<a[i];
		}
	}
	cout<<"\n\n";
}
  
int main()
{
	int n, data;
	Stack Old,New;
	cout<<"Enter number of elements to insert in stack: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>data;
		Old.push(data);
	}
	cout<<"Old array : ";
	Old.printStack();
	for(int i=0;i<n;i++)
	{
		New.push(Old.pop());
	}
	cout<<"New array : ";
	New.printStack();
}
