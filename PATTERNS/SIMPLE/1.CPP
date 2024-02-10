#include<iostream>

using namespace std;

int main(){

    int n; 

    cout << "ENTER NUMBER:";

    cin >> n;

    int rows=1;

    while (rows<=n)

    {

        int column;

        while(column<=n)

        {

            cout << "*";

            column=column+1;
            
        }

        cout << endl;

        rows=rows+1;

    }

    return 0;

}