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
    int n;
    in n;
    vector<ll> v(n);
    ll mx = -1;
    for (int i = 0; i < n; i++)
    {
        in v[i];
        mx = max(mx, v[i]);
    }
    ll sum = 0, g = 0;
    for (int i = 0; i < n; i++)
    {
        ll a = mx - v[i];
        if (a > 0)
        {
            g = __gcd(g, a);
        }
        sum += a;
    }

    pr(sum / g) << " " << g nl;

    return 0;
}

// Arundhoti Kar@
// From PUST