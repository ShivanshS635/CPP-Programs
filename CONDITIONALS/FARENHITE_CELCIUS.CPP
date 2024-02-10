#include<iostream>
using namespace std;
int main(){
    int temp;
    int choice;
    int ch=1;
    while(true){
        if(ch==1){
            cout << "IN WHICH SCALE DO YOU WANT TO CONVERT?\n1------->CELCIUS\n2------->FARENHIET\nENTER YOUR CHOICE(1/2):";
            cin >> choice;
            float c,f;
            if (choice==1)
            { 
                cout << "ENTER TEMPERATURE:";
                cin >> temp;
                c=(temp-32)*5.0/9;
                cout<<c<<endl;
            }
            else
            {
                cout << "ENTER TEMPERATURE:";
                cin >> temp;
                f=(temp*9.0/5)+32;
                cout << f<<endl;
            }
        }
        else
        {
            break;
        }
        
    cout<<"1------->CONTINUE\n2------->END\nENTER YOUR CHOICE:";
    cin>> ch;
    }  
return 0;
}