#include<iostream>

using namespace std;

int decimalToBinay(int n)
{
	int ans=0,power=1;
	int decimal=0;
	while(n>0)
	{
		decimal=n%10;
	
		n=n/10;
		ans+=(decimal*power);
		
		power*=2;
	}
	return ans;
}

int main()
{
	int k,n;
	cout<<"enter the decimal number : ";
	cin>>n;
int ans=decimalToBinay(n);
	

	cout<<ans;
	
	return 0;
	
}
