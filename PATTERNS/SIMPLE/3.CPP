#include<iostream>

using namespace std;

int main(){

    int rownm;
    
    cout << "ENTER THE NUMBER OF ROWS:";
    
    cin >> rownm;

    int rows = 1 ;

    while(rows <= rownm )
    
    {
        int col = 1;

        while(col <= rownm)
       
        {
       
            cout << col << "      ";
       
            col = col + 1;
       
        }
       
        cout << endl;
        
        rows = rows + 1;
    }
    
    return 0;

}