#include<iostream>
using namespace std;
int main(){
    int rownm;
    cout << "ENTER THE NUMBER OF ROWS:";
    cin >> rownm;

    int row=1;
    char start='A';
    while (row <= rownm )
    {
        int col=1;
        while (col <= rownm)
        {
            cout << start << "     ";
            start++;
            col++;
        }
        cout << endl;
        row++ ;
    }
    return 0;
}