#include<iostream>
using namespace std;

int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,r1,c1,r2,c2,temp;
	cout<<"ENTER NUMBER OF ROWS OF ARRAY1:";
	cin>>r1;
	cout<<"ENTER NUMBER OF COLUMNS OF ARRAY1:";
	cin>>c1;
	cout<<"ENTER NUMBER OF ROWS OF ARRAY2:";
	cin>>r2;
	cout<<"ENTER NUMBER OF COLUMNS OF ARRA2:";
	cin>>c2;
	cout<<"-----ENTER FIRST MATRIX-----\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"-----ENTER SECOND MATRIX-----\n";
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"-----FIRST MATRIX-----\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n-----SECOND MATRIX-----\n";
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<"\n";
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<c1;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	cout<<"\n-----MULTIPLIED MATRIX-----\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
