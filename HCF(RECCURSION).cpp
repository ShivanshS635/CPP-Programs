#include<iostream>
using namespace std;

int hcf(int,int);

int main()
{
	int a,b;
	cout<<"ENTER NUMBERS:";
	cin>>a>>b;
	int h;
	if(a>b)
	{
		h=hcf(a,b);
	}
	else
	{
		h=hcf(b,a);
	}
	cout<<"\nHCF---->"<<h;
	return 0;
}

int hcf(int x,int y)
{
	int rem;
	rem=x%y;
	if(rem==0)
	{
		return y;
	}
	else
	{
		hcf(y,rem);
	}
}
