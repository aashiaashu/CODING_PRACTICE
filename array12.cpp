//merge two sorted arrays
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a1[n],a2[m];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>a2[i];
    }
    int j=0;
    i=n-1;
    while(i>=0 && j<m)
    {
        if(a1[i]>=a2[j])
        {
            swap(a1[i],a2[j]);
        }
        else
        {
            break;
        }
        j++;
        i--;
    }
    sort(a1,a1+n);
    sort(a2,a2+m);
    for(i=0;i<n;i++)
    {
        cout<<a1[i]<<" ";
    }
    for(i=0;i<m;i++)
    {
        cout<<a2[i]<<" ";
    }
    return 0;
}

