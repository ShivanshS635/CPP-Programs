#include<iostream>
using namespace std;

int main()
{
	int *arr1,*arr2,*arr3,i,j,temp,n,m=2*n;
	cout<<"ENTER SIZE OF FIRST ARRAY:";
	cin>>n;
	arr1=new int[n];
	arr2=new int[n];
	arr3=new int[m];
	cout<<"ENTER FIRST ARRAY:";
	for(i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	cout<<"ENTER SIZE OF SECOND ARRAY:";
	cin>>m;
	cout<<"ENTER SECOND ARRAY:";
	for(i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	
	for(i=0;i<n;i++)
	{
		arr3[i]=arr1[i];
	}
	for(j=0;j<m;j++)
	{
		arr3[i]=arr2[j];
		i++;
	}
	for(i=0;i<m+n-1;i++)
	{
		for(j=0;j<m+n-i-1;j++)
		{
			if(arr3[j]>arr3[j+1])
			{
				temp=arr3[j];
				arr3[j]=arr3[j+1];
				arr3[j+1]=temp;
			}
		}
	}
	for(i=0;i<n+m;i++)
	{
		cout<<arr3[i]<<" ";
	}
	
	delete []arr1;
	delete []arr2;
	delete []arr3;
	return 0;
}
