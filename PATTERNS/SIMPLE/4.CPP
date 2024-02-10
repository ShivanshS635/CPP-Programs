#include<iostream>
using namespace std;
int main(){
    int rownm;
    cout << "ENTER THE NUMBER OF ROWS:";
    cin >> rownm ;
    int row = 1;
    int count=1;
    while(row <= rownm)
    {
        int col = 1;

        while (col <= rownm)
        {
            cout << count << "      ";
            count = count + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}