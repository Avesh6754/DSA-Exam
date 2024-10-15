#include<iostream>

using namespace std;

int factorial(int n)
{
	if(n==0)
	{
		return 1;
		
	}
	
	return n*factorial(n-1);
}

int main()
{
	int k,n;
	cout<<"enter the value of n : ";
	cin>>n;
	cout<<"enter the value of k : ";
	cin>>k;
	
	int ans=factorial(n)/(factorial(k)*factorial(n-k));
	cout<<ans;
	
	return 0;
	
}
