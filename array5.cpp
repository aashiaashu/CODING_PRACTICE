//program to Move all negative numbers to beginning and positive to end with constant extra space
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int j=0;
    for(i=0;i<n;++i)
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
