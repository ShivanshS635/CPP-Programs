#include<iostream>
#include<strings.h>
using namespace std;

void reverse(int);
void reverse(char *);

int main()
{
	char s[20];
	cin.getline(s,20);
	reverse(1234);
	reverse(s);
	return 0;
}

void reverse(int x)
{
	int num,d,temp=x;
	while(x!=0)
	{
		d=x%10;
		num=num*10+d;
		x=x/10;	
	}
	cout<<"Reverse Of "<<temp<<" Is---->"<<num;
}

void reverse(char *s)
{
	strrev(s);
	cout<<"Reverse Is "<<s;
}
