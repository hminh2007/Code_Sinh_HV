#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
ll a[int(1e6)];
bool check=1;
ll n;
void sinh()
{
    ll i=n-1;
    while(i>=1 && a[i]>=a[i+1])
    {
        i--;
    }
    if(i==0)
    {
        check=0;
        return ;
    }
    for(ll j=n;j>=i-1;j--)
    {
        if(a[i]<a[j])
        {
             swap(a[i],a[j]);
             break;
        }
    }
    ll l=i+1,r=n; 
    while(l<=r)
    {
        swap(a[l],a[r]);
        l++;
        r--;
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        a[i]=i;
    }
    while(check)
    {
        
        for(ll i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        sinh();
    }

}
