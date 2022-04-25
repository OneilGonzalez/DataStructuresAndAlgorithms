//stack= element inserted last is the first to come out, last in first out
//queue= element inserted first is the first to come out, first in first out
//Implament stack (push,pop,top)

#include<iostream>
#include<queue>
using namespace std;

queue<int> q1, q2, tq;

void push(int el)//add an ele to the top ex. 15 10 5
{
	//add before the prev number
	q1.push(el);
}

void pop() //returns top element without removing it 15 =  still 15 10 5
{
	if(q1.empty())
	{
		return;
	}
	while(q1.size()!=1)
	{
		int q1f=q1.front();
		q2.push(q1f);
		q1.pop();
	}	
	q1.pop();
	tq=q1;
	q1=q2;
	q2=tq;
}

int top()//takes first element ex. remove 15 = 10 5
{
	if(q1.empty())
	{
		return -1;
	}
	while(q1.size()!=1)
	{
		int q1f=q1.front();
		q2.push(q1f);
		q1.pop();
	}	
	int topval=q1.front();
	q1.pop();
	q2.push(topval);
	tq=q1;
	q1=q2;
	q2=tq;
return topval;	
}

int main()
{
	push(2);
	push(3);
	push(5);
	push(8);
	
	cout<<top()<<endl;
	push(10);
	push(15);
	pop();
	cout<<top()<<endl;
}
