/*
  A
  B  C
  D  E  F
  G  H  I  J
*/
#include<iostream>
using namespace std;
int main(){
    int rownm;
    int row=1;
    cout << "ENTER THE NUMBERS OF ROWS:";
    cin >> rownm;
    while(row <= rownm)
    {
        int col =1 ;
        while ( col <= row)
        {
            char ch='A'+row+col-2;
            cout << ch << "    ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}