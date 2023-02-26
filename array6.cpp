//program to find union of two sorted arrays
//here we use set 
//set only take unique elements
#include <bits/stdc++.h>
#include <algorithm>
#include<set>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    int a[n],b[m];
    set<int>s;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
        s.insert(b[i]);
    }
    cout<<s.size()<<endl;
    return 0;
}
