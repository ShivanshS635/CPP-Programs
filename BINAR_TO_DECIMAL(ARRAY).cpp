#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int *bin,i,n,num=0;
	cout<<"ENTER SIZE OF BINARY NUMBER:";
	cin>>n;
	bin=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>bin[i];
	}
	for(i=n;i>=1;i--)
	{
		num=num+bin[n-i]*pow(2,i-1);
	}
	cout<<"DECIMAL---->"<<num;
	return 0;
}
