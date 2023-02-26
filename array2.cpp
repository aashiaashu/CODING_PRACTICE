//program to find min and max element in an array
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int mn=INT_MAX;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(mn>arr[i])
        {
            mn=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(mx<arr[i])
        {
            mx=arr[i];
        }
    }
    cout<<mn<<" "<<mx<<endl;
   
    return 0;
}
