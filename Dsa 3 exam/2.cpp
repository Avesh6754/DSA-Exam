#include<iostream>

using namespace std;

int main()
{
	int n;
	
	cout<<"enter the size of array  ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the value of array : ["<<i<<"] "<<endl;
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<"Array before reverse "<<a[i]<<endl; 
	}
	
	int start=0,end=n-1,temp=0;
	while(start<end){
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
		
	}
	cout<<"============================================"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Array after reverse "<<a[i]<<endl; 
	}	
	return 0;
}
