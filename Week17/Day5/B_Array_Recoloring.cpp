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
void solve()
{
    int n, k;
    in n >> k;
    vtr v(n);
    for (int i = 0; i < n; i++)
        in v[i];
    ll ans = 0;
    if (k == 1)
    {
        for (ll i = 0; i < n - 1; i++)
        {
            ans = max(ans, v[i] + v[n - 1]);
        }
        for (ll i = 1; i < n; i++)
        {
            ans = max(ans, v[0] + v[i]);
        }
        cout << ans << endl;
    }
    else
    {
        srt(v);
        for (ll i = 0; i < k + 1; i++)
        {
            ans += v.back();
            v.pop_back();
        }
        cout << ans << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    in t;
    while (t--)
    {

        solve();
    }
    return 0;
}

// Arundhoti Kar@
// From PUST