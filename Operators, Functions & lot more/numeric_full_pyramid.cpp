#include<iostream>
using namespace std;

int main(){
    // cout << "Hello World";

    int n = 5;
    // cin >> n;
    
    for(int row=0;row<n;row++){
        //spaces
        for(int col=0; col< n-row-1; col = col+1){
            cout << " ";
        }
        //numbers
        for(int col=0; col<row+1; col++){
            cout << row+col+1;
        }
        
        //reverse counting
        int start = 2*row;
        for(int col=0; col<row; col++){
            cout << start;
            start--;
        }

        cout << endl;
        
    }
    return 0;
}

// int start = row+1;
//         for(int col=0; col<row+1; col++){
//             cout << start << " ";
//             start++;
//         }