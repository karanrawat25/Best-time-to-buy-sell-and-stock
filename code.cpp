#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mx=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int b=a[j]-a[i];
                mx=max(mx,b);
            }
        }
    }
    if(mx==0)
    {
        cout<<0;
    }
    else
    {
        cout<<mx;
    }
}
