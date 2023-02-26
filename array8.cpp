//program find maximum subarray sum
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main ()
{
  long long int n;
  cin>>n;
  long long int arr[n],i;
  for(i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  long long int cs=0,ms=0;
  for(i=0;i<n;++i)
  {
      cs=max(cs+arr[i],arr[i]);
      ms=max(cs,ms);
  }
  cout << ms << endl;
  return 0;
}

