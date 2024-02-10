#include<iostream>
using namespace std;

void max(int,int);
void max(int,int,int);

int main()
{
	max(4,5);
	cout<<endl;
	max(5,8,1);
	return 0;
}

void max(int x,int y)
{
	if(x>y)
	{
		cout<<"Max---->"<<x;
	}
	else
	{
		cout<<"Max---->"<<y;
	}
}

void max(int x,int y,int z)
{
	if(x>y)
	{
		if(x>z)
		{
			cout<<"Max---->"<<x;
		}
		else
		{
			cout<<"Max---->"<<z;
		}
	}
	else
	{
		if(y>z)
		{
			cout<<"Max---->"<<y;
		}
		else
		{
			cout<<"Max---->"<<z;
		}
	}
}
