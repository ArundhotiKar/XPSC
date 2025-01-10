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
        vtr a;
        map<ll, int> m;
        for (int i = 0; i < n; i++)
        {
            ll b;
            in b;
            if (m[b] == 0)
            {
                a.push_back(b);
                m[b]++;
            }
        }
        srt(a);
        ll ans = 0;
        for (int i = 0; i < a.size(); i++)
        {
            ll x = a[i];
            auto it = lower_bound(a.begin(), a.end(), x + n);
            ll d=it - a.begin()-i;
            ans=max(ans,d);
        }
        pr ans nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST