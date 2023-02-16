// sort 0s and 1s
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{0, 1, 0, 1, 1, 0, 1, 0, 1, 1};

    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i < arr.size())
    {
        /* code */
        if (arr[i] == 0)
        {
            // swap from left
            swap(arr[start], arr[i]);
            i++;
            start++;
        }
        if (arr[i] == 1)
        {
            // swap from right
            swap(arr[i], arr[end]);
            end--;
            // i++;
        }
    }

    // print
    for (int j = 0; j < arr.size(); j++)
    {
        cout << arr[j] << " ";
    }

    cout << endl;

    return 0;
}