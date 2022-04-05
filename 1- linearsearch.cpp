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
		if(arr[i]==targetnum)
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
