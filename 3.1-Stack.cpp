//Write a program to truncate(reduce size) a string using stack if you are allowed to delete two consecutive characters if they are same in single operation
//Also print total number of operations
#include<iostream>
#include<stack>
using namespace std;



int main()
{
	std::stack<char> mystack;
	string str="zbaccabbbcx";
	
	int len=str.length();// get the string's length 
	int opr=0; //counts number of operations
	for(int i=0; i<len; i++)
	{
		if(mystack.empty())
		{
			mystack.push(str[i]);//push z
		}
		else
		{
			int topele=mystack.top(); //gets top element in the stack
			if(str[i]!=topele) //if it is not equal to the top element it will discard it
			{
				mystack.push(str[i]);
			}
			else // if it is equal it will pop it.
			{
				mystack.pop();
				opr+=1; // opr is the number of operations or pops we've made.
			}
		}
	}
	string ans="";
	while(!mystack.empty())
	{
		//cout<<mystack.top();
		ans=mystack.top()+ans;
		mystack.pop();
	}
	cout<<ans<<endl<<opr;
}
