#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "ENTER THE NUMBER:";
    cin >> n;
    int i=2;
    while (i<n)
    {
        if (n%i!=0)
        {
            cout << n <<" IS A PRIME NUMBER FOR " << i<<endl;
            
        }
        else
        {
            cout << n << " IS NOT A PRIME NUMBER FOR " << i <<endl;
        }
        i=i+1;
    }
    
    return 0;
}