#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack<int> s1,s2;


int main()
{
	string pattern = "[{[]}}()]";       //"[{[]()}]";
	
	for(int i =0; i<pattern.length(); i++)
	{
		char ch= pattern[i];
		if(ch=='{'||ch=='['||ch=='(')
		{
			s1.push(ch);
		}
		else
		{
			if(!s1.empty())
			{
				char topch=s1.top();
				if ((topch=='{'&& ch=='}')||(topch=='['&& ch==']')||(topch=='('&& ch==')'))
				{
					s1.pop();
				}
				else // it does not match so break
				{
					break;
				}
				
			}
		}
		
			
	}
	if(s1.size()==0)
	{
		cout<<"Valid";
	}
	
	else
	{
		cout<<"Invalid";
	}
}
