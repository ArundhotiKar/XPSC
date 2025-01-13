#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
const ll MOD = 1e9 + 7;
int n;
vtr a;
ll t;
ll power(ll x, ll y)
{
    ll ans = 1 % MOD;
    while (y)
    {
        if (y & 1)
        {
            ans = (1LL * ans % MOD * x % MOD) % MOD;
        }
        x = 1LL * x * x % MOD;
        y >>= 1;
    }
    return ans;
}
bool Ok(ll mid)
{
    ll time=0;
    for(int i=0; i<n; i++)
    {
        time+=(mid/a[i]);
        if (time >= t) 
            return true;
    }
    return t<=time;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    in n;
    in t;
    ll mx_value=0;
    for (int i = 0; i < n; i++)
    {
        ll aa;
        in aa;
        a.push_back(aa);
        mx_value=max(mx_value,aa);
    }
    ll l = 1, r = t*mx_value;
    ll ans=LONG_MAX;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        if(Ok(mid))
        {
            ans=min(ans,mid);
            r=mid-1;
        }else
        {
            l=mid+1;
        }
    }
    pr ans nl;

    return 0;
}

// Arundhoti Kar@
// From PUST