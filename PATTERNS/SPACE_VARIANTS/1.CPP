#include<iostream>
using namespace std;
int main(){
    int rownm;
    cout << "ENTER THE NUMBERS OF ROWS:";
    cin >> rownm;
    int row=1;
    while(row <= rownm)
    {
        int space=rownm-row;
        while(space)
        {
            cout << " ";
            space--;
        }
        int col=1;
        while(col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl ;
        row++;
    }
    return 0;
}