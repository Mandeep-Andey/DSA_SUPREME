#include <iostream>
using namespace std;

int main()
{

    int n = 3;
    int m = 5;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
