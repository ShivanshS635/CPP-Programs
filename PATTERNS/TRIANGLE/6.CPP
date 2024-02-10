#include<iostream>
using namespace std;
int main(){
    int rownm;
    cout <<"ENTER THE NUMBER OF ROWS:";
    cin >> rownm;

    int row=1 ;
    char value='A';
    while(row <= rownm)
    {
        int col=1;

        while (col <= row)
        {
            cout << value << "   ";
            value++;
            col++;
        }
        cout  << endl ;
        row++;
    }
    return 0;
}