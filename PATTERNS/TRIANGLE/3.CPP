#include<iostream>
using namespace std;
int main(){
    int rownm;
    cout << "ENTER THE NUMBER OF ROWS:";
    cin >> rownm;

    int row=1,count=1;
    while (row <= rownm)
    {
        int col=1;
        while  (col <= row)
        {
            cout << count << "      ";
            count++;
            col++;
        }
        cout << endl ;
        row++;
    }
    return 0;
}