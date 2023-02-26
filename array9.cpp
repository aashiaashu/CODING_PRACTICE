//program to minimise the maximum difference between heights
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main ()
{
  int n,k,i;
  cin>>n>>k;
  int arr[n];
  for(i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  sort(arr,arr+n);
  int currmin=arr[0]+k;
  int currmax=arr[n-1]-k;
  int ans=currmax-currmin;
  for(i=1;i<n-1;i++)
  {
      if(arr[i]<k)
      {
          continue;
      }
      else
      {
          currmin=min(arr[0]+k,arr[i]-k);
          currmax=max(arr[i-1]+k,arr[n-1]-k);
      }
      ans=min(ans,currmax-currmin);
  }
  cout<<ans<<endl;
  return 0;
}

