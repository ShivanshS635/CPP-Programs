#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "ENTER THE NUMBER UPTO WHICH YOU HAVE TO FIND THE SUM:";
    cin >> n;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans=i+ans;
    }
    cout << "THE SUM FROM 1 TO " << n << " IS:";
    cout << ans;
    return 0;
}