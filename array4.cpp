//program to Sort an array of 0s, 1s and 2s
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
    int c0=0,c1=0,c2=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            c0++;
        }
        else if(arr[i]==1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
        for(i=0;i<c0;i++)
        {
            arr[i]=0;
        }
        for(i=c0;i<c0+c1;i++)
        {
            arr[i]=1;
        }
        while(c2--)
        {
            arr[i++]=2;
        }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    return 0;
}
