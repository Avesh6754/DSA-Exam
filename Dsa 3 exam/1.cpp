#include<iostream>

using namespace std;

int main()
{
	int a,b;
	
	cout<<"enter the value of a ";
	cin>>a;
	cout<<"enter the value of b ";
	cin>>b;
	
	a=a^b;
	b=a^b;
	a=b^a;
	
	cout<<" A "<<a<<endl;
	cout<<" B "<<b<<endl;
	return 0;
}
