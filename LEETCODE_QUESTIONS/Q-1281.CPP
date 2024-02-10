#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "ENTER:";
    cin >> n;
    int sum=0;
    int product=1;
    while(n!=0)
    {
        int c=n%10;
        product = product * c;
        sum = sum + c;

        n=n/10;
    }
    int ans=product-sum;
    cout << ans;
    return 0;
}