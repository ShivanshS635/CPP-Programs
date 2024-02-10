#include<iostream>
using namespace std;
int main(){
    int rownm;
    cout << "ENTER THE NUMBER OF ROWS:";
    cin >> rownm;
    int row=1;
    while (row <= rownm)
    {
        int col=1;
        char ch='A'+rownm-row;
        while(col <= row)
        {
            cout << ch <<"     ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}