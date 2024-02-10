#include<iostream>

using namespace std;

int main(){

    int a,b;

    cout << "ENTER THE VALUE OF A:";
    cin >> a;

    cout << "ENTER THE VALUE OF B:";
    cin >> b;

    if(a>b)
    {
        cout << "A IS GREATER THAN B.";
    }

    else if(a<b)
    {
        cout << "B IS GREATER THAN A.";
    }

    else 
    {
        cout << "BOTH ARE EQUAL. ";
    }

    return 0;
}