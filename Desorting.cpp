#include<bits/stdc++.h>
using namespace std;
#define Start ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define sort(a) sort(a,a+n)
#define tc ll t; cin>>t; while(t--)
 
void solve()
{
    int n;
    cin>>n;
    ll arr[n+123];
    for(ll i=0; i<n; i++) cin>>arr[i];
 
    bool key = false;
    ll cnt_same = 0;
    for(ll i=0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            cout<<0<<endl;
            key = true;
            break;
        }
        else if(arr[i]==arr[i+1])
        {
            cnt_same++;
        }
    }
    if(cnt_same == n-1)
    {
        cout<<1<<endl;
    }
    else if(key == false)
    {
        ll cnt=abs(arr[1]-arr[0]);
        for(ll i=0; i<n-1; i++)
        {
            cnt = min(cnt,abs(arr[i]-arr[i+1]));
        }
        if(cnt == 0){
            cout<<1<<endl;
        }
        else{
            ll res = (cnt/2)+1;
            cout<<res<<endl;
 
        }
    }
}
int main()
{
    tc
    {
        solve();
    }
}
