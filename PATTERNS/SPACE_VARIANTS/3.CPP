#include<iostream>
using namespace std;
int main(){
    int rownm;
    int row=1;
    cout << "ENTER THE NUMBER OF ROWS:";
    cin >> rownm;
    while (row <= rownm)
    {
        int space=row-1;
        while(space)
        {
            cout <<" ";
            space--;
        }
        int col=rownm-row+1;
        while(col)
        {
            cout << "*";
            col--;
        }
        cout << endl;
        row++;
    }
    return 0;
}