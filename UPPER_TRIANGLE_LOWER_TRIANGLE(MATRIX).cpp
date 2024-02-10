#include<iostream>
using namespace std;

int main()
{
	int a[10][10],i,j,r,c;
	cout<<"ENTER NUMBER OF ROWS:";
	cin>>r;
	cout<<"ENTER NUMBER OF COLUMNS:";
	cin>>c;
	cout<<"-----ENTER MATRIX-----\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"-----MATRIX-----\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nUPPER TRIANGLE\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i<=j)
			{
				cout<<a[i][j]<<" ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
	cout<<"\nLOWER TRIANGLE\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i>=j)
			{
				cout<<a[i][j]<<" ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
