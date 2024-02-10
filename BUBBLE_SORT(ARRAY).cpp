#include<iostream>
using namespace std;

int main()
{
	int *arr,i,j,n,temp;
	arr=new int[n];
	cout<<"ENTER SIZE OF ARRAY:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n-----ARRAY BEFORE SORTING-----";
	for(i=0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\n-----ARRAY AFTER SORTING-----";
	for(i=0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
	delete []arr;
	return 0;
}
