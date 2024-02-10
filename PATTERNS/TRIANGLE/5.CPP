#include<iostream>
using namespace std;
int main(){
    int rownm;
    cout << "ENTER THE NUMBER OF ROWS:";
    cin >> rownm;

    int row=1;
    while(row <= rownm)
    {
        int col=1;
        while(col <= row)
        {
            char ch='A'+row-1;
            cout << ch << "    ";
            col++;
        }
        cout << endl ;
        row++;
    }
    return 0;
}