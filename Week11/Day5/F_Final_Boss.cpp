#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
ll n, h;
vtr a, b;
const ll MOD = 1e9 + 7;
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
bool ok(ll mid)
{
     vtr tem;
     for(int i=0; i<n; i++)
     {
        ll d=mid/b[i];
        if((mid%b[i])>0)
        {
            tem.push_back(d);
        }else
        {
            tem.push_back(d-1);
        }
        
     }
     ll attack=0;
     for(int i=0; i<n; i++)
     {
         attack+=(tem[i]*a[i]);
     }
      return attack>=h;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    in t;
    while (t--)
    {
        
        in h >> n;
        ll sum = 0;
        a.clear();
        b.clear();
        for (int i = 0; i < n; i++)
        {
            ll aa;
            in aa;
            a.push_back(aa);
            sum += aa;
        }
        for (int i = 0; i < n; i++)
        {
            ll aa;
            in aa;
            b.push_back(aa);
        }
        h -= sum;
        if (h <= 0)
        {
            pr 1 nl;
            continue;
        }
        ll l = 2, r = 1e12, ans = r;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if(ok(mid))
            {
                ans=min(ans,mid);
                r=mid-1;
                
            }else
            {
                l=mid+1;
            }
        }
        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST