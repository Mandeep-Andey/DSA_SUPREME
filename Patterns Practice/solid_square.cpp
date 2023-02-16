#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // outer loop
    for (int row = 0; row < n; row++)
    {
        // inner loop
        cout << "row:" << row + 1;
        for (int col = 0; col < n; col++)
        {
            // cout << "col:" << col + 1;
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}