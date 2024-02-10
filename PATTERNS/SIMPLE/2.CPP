#include<iostream>
using namespace std;
int main(){
    
    int row_num;
    cout << "ENTER THE NUMBER OF ROWS:";
    cin >> row_num;

    int row = 1;
    while (row <= row_num)
    {
        int column = 1;
        while (column <= row_num)
        {
            cout << row << "    ";
            column = column + 1;
        }
        cout << endl;
        row = row  + 1;
    }

    return 0;
}