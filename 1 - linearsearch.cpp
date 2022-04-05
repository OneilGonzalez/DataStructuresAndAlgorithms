//Program that will search the position of an element of an array.
#include<iostream>

using namespace std;

int i, j, targetnum, n=7;
int arr[7] = {2,-1,5,10,7,3,9};

int main()
{
	cout<<"The number is ";
	cin>>targetnum;
	
	bool found=false;
	int ans=-1;
	
	for(i=0; i<n; i++)
	{
		if(arr[i]==targetnum) //if true go to else and be printed. if false it will be skipped by the program
			{
				found=true;
				ans=i;
				break;
			}
		
	}if(found==false)
	{
		cout<<"-1";
		
	}
	else
	{
		cout<<ans;
	}
			
		
}
