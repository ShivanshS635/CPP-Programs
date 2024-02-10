#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cout << "ENTER THE NUMBER OF ROWS:";
    cin >> n;
    while (i <= n)
    {
        int space=n-i+1;
        while(space)
        {
            cout << " ";
            space--;
        }
        int col=1,value=col;
        while (col <= i)
        {
            cout << value ;
            value++;
            col++;
        }
        int j=i-1;
        while(j)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;

    }
    return 0;
}




