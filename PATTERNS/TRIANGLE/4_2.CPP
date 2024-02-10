#include<iostream>
using namespace std;
int main(){
    int rownm;
    cout << "ENTER THE NUMBER OF ROWS:";
    cin >> rownm;
    int row=1;
    while(row<=rownm)
    {

        int col=1;

        while(col<=row)

        {
            cout << row+col-1 << "    ";
            col++;
        }
        cout << endl ;
        row++;

    }
    return 0;
}