#include<iostream>
#include<cctype>

using namespace std;

int main(){
    char ch;
    cout << "ENTER :";
    cin >> ch;
    if (isupper(ch)){
        cout << ch << " IS UPPERCASE";
    }
    else if (islower(ch)){
        cout << ch <<" IS LOWERCASE.";
    }
    else{
        cout << ch <<" IS NUMERIC.";
    }
    return 0;
}