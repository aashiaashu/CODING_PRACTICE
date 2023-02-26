//program to rotate an array an array by one
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int
main ()
{
  int n, i;
  cin>>n;
  int arr[n];
  for (i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  int last = arr[n - 1];
  for (i = n - 2; i >= 0; --i)
    {
      arr[i + 1] = arr[i];
    }
  arr[0] = last;
  for (i = 0; i < n; ++i)
    {
      cout << arr[i] << " ";
    }
  cout << endl;
  return 0;
}

