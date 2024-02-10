#include<iostream>
using namespace std;
int main(){
    int i=1;
    int sum=0;
    int n;
    cout << "ENTER THE VALUE OF N:";
    cin >> n;//5

    while(i<=n){/*i=1--->sum=0+1---->sum=1
                  i=2--->sum=1+2---->sum=3
                  i=3--->sum=3+3---->sum=6
                  i=4--->sum=6+4---->sum=10
                  i=5--->sum=10+5--->sum=15
                  */
        sum=sum+i;
        i=i+1;
    }//sum=15
    cout << sum;//15
    return 0;
}