#include<iostream>
using namespace std;

int main(){
    bool a = false;

    cout << ~a << endl;

    cout << (2&3) << endl;
    cout << (5&10) << endl;
    cout << (3^7) << endl;


    // << >> left & right shift operators
    cout << "shift operators" << endl;
    int c = 5;
    float d = c>>1;
    cout << float(d) << endl;

    cout << "NEW TEST" << endl;
    bool cd = false;
    cout << ~a << endl;
    cout << ~(a) << endl;
    cout << !a << endl;


    return 0;
}