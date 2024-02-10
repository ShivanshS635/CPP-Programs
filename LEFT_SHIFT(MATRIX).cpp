#include<iostream>
using namespace std;

int main()
{
	int *arr1,*arr2,i,n;
	cout<<"ENTER SIZE OF YOUR ARRAY:";
	cin>>n;
	arr1=new int[n];
	arr2=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	int x=arr1[0];
	for(i=0;i<n-1;i++)
	{
		arr2[i]=arr1[i+1];
	}
	arr2[i]=x;
	cout<<"\n-----ARRAY BEFORE LEFT SHIFTING-----";
	for(i=0;i<n;i++)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<"\n-----ARRAY AFTER LEFT SHIFTING-----";
	for(i=0;i<n;i++)
	{
		cout<<arr2[i]<<" ";
	}
	delete []arr1;
	delete []arr2;
	return 0;
}
