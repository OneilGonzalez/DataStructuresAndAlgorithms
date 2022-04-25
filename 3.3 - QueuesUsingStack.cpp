//stack= element inserted last is the first to come out, last in first out
//queue= element inserted first is the first to come out, first in first out
//Implement queues using enqueue and dequeue

#include<iostream>
#include<stack>
using namespace std;

stack<int> s1,s2,ts;

void enqueue(int el)
{

	s1.push(el);	
}

void dequeue()
{
	if(s1.empty())
	{
		return;
	}
	while(s1.size()!=1)
	{
		s2.push(s1.top());
		s1.pop();
	}	
	s1.pop();
	while(s2.size()!=0)
	{
		s1.push(s2.top());
		s2.pop();
	}
}

int front()
{
	if(s1.empty())
	{
		return -1;
	}
	while(s1.size()!=1)
	{
		s2.push(s1.top());
		s1.pop();
	}	
	int frontval=s1.top();
	
	while(s2.size()!=0)
	{
		s1.push(s2.top());
		s2.pop();
	}

return frontval;	
}


int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(16);
	
	dequeue();//deletes front element which is 1
	cout<<front()<<endl;
	enqueue(6);
	cout<<front()<<endl;
}
