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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    in t;
    while (t--)
    {
        int n;
        in n;
        vtr a(n);
        for (int i = 0; i < n; i++)
        {
            in a[i];
        }
        vtr tem;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] > a[i])
            {
                ll aa=a[i-1]-a[i];
                tem.push_back(aa);
                a[i]=a[i-1];
            }
        }
        if (tem.size() == 0)
        {
            pr 0 nl;
        }
        else
        {
            srt(tem);
            ll ans=0,prev=0;
            for(int i=0; i<tem.size(); i++)
            {
               if(prev<tem[i])
               {
                ans=ans+(tem.size()-i + 1)* (tem[i]-prev);
               }
               prev=tem[i];
            }
            pr ans nl;
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST