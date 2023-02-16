#include<iostream>
using namespace std;

int main(){
    int val;
    cout << "Enter the value: ";
    cin >> val;

    switch (val){
        case 1: cout << "Love" << endl;
        break;
        case 2: cout << "Babbar" << endl;
        break;
        case 3: cout << "Mahanth" << endl;
        break;
        case 4: cout << "Mandeep" << endl;
        break;
        default: cout << "Default" << endl;
    }
    return 0;
}