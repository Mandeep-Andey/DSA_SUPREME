#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
  vector<int> arr;
  cout << "size:" << arr.size() << endl;
  cout << "capacity:" << arr.capacity() << endl;
  for (int i = 0; i < 10; i++)
  {
    arr.push_back(i * 2); // insert elements into array
  }

  for (int j = 0; j < arr.size(); j++)
  {
    cout << arr[j] << " ";
  }
  cout << endl;
  cout << "size of arr:" << arr.size() << endl;
  cout << "capacity of arr:" << arr.capacity() << endl;

  vector<int> brr(10); // explicitly mentioning the size
  int ans = (sizeof(arr) / sizeof(int));
  cout << "ans:" << ans << endl;
  cout << "size of brr:" << brr.size() << endl;
  cout << "capacity of brr:" << brr.capacity() << endl;

  return 0;
}