//Program that will search an element in the array given by identifying the left, right, and middle element of an array.
#include<iostream>

using namespace std;

int l, r, m, num=12;
int arr[12]={45,77,89,90,94,99,100};
int target;


int main()
{
	cout<<"find number: ";
	cin>>target;
	l=0;
	r=num-1;
	
	while(l<=r)
	{
	m=l+((r-l)/2);
	
	if(arr[m]==target)
	{
		cout<<m;
		break;
	}
		
	else if(arr[m]>target)
		r=m-1;
		
	else if (arr[m]<target)
		l=m+1;
		
	}return 0;
}

