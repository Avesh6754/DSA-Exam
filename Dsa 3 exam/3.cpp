#include<iostream>

using namespace std;

int main()
{
	//linear search mean to search any value into linaer way from left to right in array ,
	int n;
	
	cout<<"enter the size of array  ";
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the value of array : ["<<i<<"] "<<endl;
		cin>>a[i];
	}
	int target;
	cout<<"enter the target value in array  ";
	cin>>target;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==target)
		{
			cout<<"Index = "<<i<<endl;
	
		}
	}
	
	
	return 0;
}
