#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "ENTER THE NUMBER:";
    cin >> n;
    bool isprime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime==0)
    {
        cout << n <<" IS NOT A PRIME NUMBER......";
    }
    else
    {
        cout << n << " IS A PRIME NUMBER......";
    }
    return 0;
}