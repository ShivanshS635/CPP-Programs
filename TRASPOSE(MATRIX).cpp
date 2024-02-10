#include<iostream>
using namespace std;

int main()
{
	int a[10][10],i,j,r,c,temp;
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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i<j)
			{
				temp=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=temp;
			}
		}
	}
	cout<<"-----TRANSPOSED MATRIX-----\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
