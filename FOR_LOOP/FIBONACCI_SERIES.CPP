#include<iostream>
using namespace std;
int main(){
    int n , a=0 ,b=1;
    cout << "ENTER THE NUMBER UPTO WHICH YOU HAVE TO PRINT THE SERIES:";
    cin >> n ;
    cout << a << " " << b << " ";
    for (int i=1;i<=n;i++)
    {
        int c=a+b;
        cout << c << " ";
        a=b;
        b=c;
    }

    return 0;
}