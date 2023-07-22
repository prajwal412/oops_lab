#include<iostream>
using namespace std;
#define s 4
class stack
{
	int st[s];
	int tos;
	public:
	void intt();
	void push(int);
	int pop();
	void display();
	int peek();
};
void stack::intt()
{
	tos=0;
}
void stack::push(int i)
{
	
	if(tos==s)
	{
		cout<<"Stack full";
	}
	else
	{
		/*cout<<"Enter the value";
		cin>>i;*/
		st[tos]=i;
		tos++;
	}
}
int stack::pop()
{
	if(tos==0)
	{
		cout<<"Stack underflow";
		return 1;
	}
	tos--;
	cout<<"Poppped element"<<st[tos];
	return 0;
}
void stack::display()
{
	if(tos==0)
	{
		cout<<"stack is empty";
		return;
	}
	for(int i=0;i<tos;i++)
	{
		cout<<st[i]<<"\t";
	}
}
int stack::peek()
{
  cout<<"peek value is "<<st[tos-1];
}
int main()
{
	int ch,i;
	stack a;
	a.intt();
	a.push(3);
	a.push(4);
	a.push(5);
	a.peek();
	a.pop();
	
	/*while(1)
	{
		cout<<"1.Push\t2.Pop\t3.Display\t4.peek\n";
		cin>>ch;
		switch(ch)
		{
			/*case 1: a.push();
			break;
			case 2: a.pop();
			break;
			case 3: a.display();
			break;
			case 4: a.peek();
			break;
			default: return 0;
		}
	}*/
	
}
