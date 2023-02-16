#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter rows and columns: " << endl;
    cin >> n >> m;

    for (int row = 0; row < n; row++)
    {
        // first and last rows print normally
        if (row == 0 || row == n - 1)
        {
            for (int col = 0; col < m; col++)
            {
                cout << "*";
            }
        }
        // the middle rows should have 2 stars at the beginning
        // and at the end. remaining characters are " "
        else
        {
            cout << "*";
            for (int i = 0; i < m - 2; i++)
            {
                cout << " ";
            }

            cout << "*";
        }
        cout << endl;
    }
    return 0;
}