#include<iostream>
using namespace std;

int main()
{
	int matrix[10][10];
	int i,j,m,n;
	cout<<"ENTER THE NUMBER OF ROWS:";
	cin>>m;
	cout<<"ENTER THE NUMBER OF COLUMNS:";
	cin>>n;
	cout<<"-----ENTER MATRIX-----";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\n"<<"Enter ["<<i+1<<","<<j+1<<"] Element:";
			cin>>matrix[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	int t=0;
	int b=m-1;
	int r=n-1;
	int l=0;
	cout<<endl;
	cout<<"----SPIRAL-----\n";
	while(t<=b && l<=r)
	{
		for(i=l;i<=r;i++)
		{
			cout<<matrix[t][i]<<" ";
		}
		t++;
		for(i=t;i<=b;i++)
		{
			cout<<matrix[i][r]<<" ";
		}
		r--;
		if(t<=b)
		{
			for(i=r;i>=l;i--)
			{
				cout<<matrix[b][i]<<" ";
			}
			b--;
		}
		if(l<=r)
		{
			for(i=b;i>=t;i--)
			{
				cout<<matrix[i][l]<<" ";
			}
			l++;
		}
	}
	
	return 0;
}
