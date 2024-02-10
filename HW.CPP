#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n!=0){

        int b= n & 1;
        cout << b;
        n = n >> 1;
    }


    return 0;
}