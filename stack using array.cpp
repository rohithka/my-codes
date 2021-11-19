#include<iostream>
using namespace std;
int stack[5],n=5,top=-1;


void push(int value)
{
	if(top>=n-1)
	cout<<"Stack is Full"<<endl;
	else
	{
	++top;
	stack[top]=value;
	}
}
void pop()
{
	if(top<=-1)
	{
	cout<<"Stack is Empty"<<endl;
	
	}
	else
	{
		cout<<"the popped element is"<<stack[top]<<endl;
		top--;
	}
}
void print()
{
	if(top>=0)
	{
		cout<<"stack is"<<endl;
		for(int i=0;i<=top;i++)
		cout<<stack[i]<<"";
		cout<<endl;
	}
	else
	{
		cout<<"stack is empty";
	}
}
int main( )
{
	int n;
	int val;
	do
	{
		cout<<"1.push"<<endl;
		cout<<"2.pop"<<endl;
		cout<<"3.display"<<endl;
		cout<<"4.quit"<<endl;
		cout<<"enter the option : ";
		cin>>n;
		switch(n)
		{
			case 1:
					cout<<"enter the values : ";
					cin>>val;
					push(val);
					break;
			case 2:
					pop();
					cout<<"popped"<<val<<endl;
					break;
			case 3:
					print();
					break;
			case 4:
					cout<<"exit"<<endl;
					break;
			default:
			break;
		}
	}while(n!=4);
		return 0;
}
