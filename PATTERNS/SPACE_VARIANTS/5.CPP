#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "ENTER THE NUMBER OF ROWS:";
    cin >> n;

    //ROWS

    int i=1;
    while(i<=n)
    {
        //TRIANGLE 1

        int j=n-i+1;
        int val=1;
        while(j)
        {
            cout <<val;
            val++;
            j--;
        }
        // TRIANGLE 2

        int t2=i-1;
        while(t2)
        {
            cout << "*";
            t2--;
        }
        //TRIANGLE 3

        int t3=i-1;
        while(t3)
        {
            cout << "*";
            t3--;
        }
        //TRIANGLE 4

        int t4=n-i+1;
        int ch=n-i+1;
        while(t4)
        {
            cout << ch;
            ch--;
            t4--;
        }

        cout << endl;
        i++;
    }
    return 0;
}