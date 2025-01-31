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
    int n, q;
    in n >> q;
    vtr a(n), d(n + 1);
    for (int i = 0; i < n; i++)
    {
        in a[i];
    }
    while (q--)
    {
        int l, r;
        in l >> r;
        l--, r--;
        d[l]++;
        d[r+1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        d[i] = d[i - 1] + d[i];
    }
    sort(a.rbegin(), a.rend());
    sort(d.rbegin(), d.rend());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (1LL * a[i] * d[i]);
    }
    pr ans nl;
    return 0;
}

// Arundhoti Kar@
// From PUST