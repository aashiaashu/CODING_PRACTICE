//program to find the duplicate number
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main ()
{
  int n,i;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  sort(arr,arr+n);
  for(i=0;i<n;i++)
  {
      if(arr[i]==arr[i+1])
      {
          break;
      }
  }
  cout<<arr[i]<<endl;
  return 0;
}

