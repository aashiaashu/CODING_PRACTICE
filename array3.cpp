//program to find kth maximum and minimum element 
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
    int k;
    cin>>k;
    sort(arr,arr+n);
    cout<<arr[k-1]<<" "<<arr[n-k]; 
    return 0;
}
