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
    map<ll, ll> m;
    while (t--)
    {
        ll l, r;
        in l >> r;
        m[l]++;
        m[r + 1]--;
    }
    ll sum = 0;
    bool ok = true;
    for (auto i : m)
    {
        sum += i.second;
        if (sum > 2)
        {
            pr "NO\n";
            ok = false;
            break;
        }
    }
    if (ok)
    {
        pr "YES\n";
    }
    return 0;
}

// Arundhoti Kar@
// From PUST