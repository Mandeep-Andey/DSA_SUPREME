#include <iostream>
#include <vector>

using namespace std;

void unionNoDuplicate(vector<int> arr, vector<int> brr)
{
    vector<int> noDuplicate;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                brr.erase(brr.begin() + j);
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                arr.erase(arr.begin() + j);
            }
        }
    }
    for (int i = 0; i < brr.size(); i++)
    {
        for (int j = i + 1; j < brr.size(); j++)
        {
            if (brr[i] == brr[j])
            {
                brr.erase(brr.begin() + j);
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        noDuplicate.push_back(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        if (brr[i] != INT16_MIN)
        {
            noDuplicate.push_back(brr[i]);
        }
    }
    cout << "the union is:" << endl;
    for (int i = 0; i < noDuplicate.size(); i++)
    {
        cout << noDuplicate[i] << " ";
    }
}

int main()
{
    vector<int> arr{1, 2, 3, 3, 4, 5, 6, 6, 7};

    vector<int> brr{1, 5, 6, 9, 10, 4};

    unionNoDuplicate(arr, brr);

    return 0;
}