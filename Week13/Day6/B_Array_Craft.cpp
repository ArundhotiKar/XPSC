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
        int n, x, y;
        in n >> x >> y;
        vtr a(n + 1);
        for (int i = y; i <= x; i++)
        {
            a[i] = 1;
        }
        int f = 1;
        for (int i = y - 1; i >= 1; i--)
        {
            if (f == 1)
            {
                a[i] = -1;
                f = 0;
            }
            else
            {
                a[i] = 1;
                f = 1;
            }
        }
        f = 1;
        for (int i = x + 1; i <= n; i++)
        {
            if (f == 1)
            {
                a[i] = -1;
                f = 0;
            }
            else
            {
                a[i] = 1;
                f = 1;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            pr a[i] << " ";
        }
        pr "\n";
    }
    return 0;
}

// Arundhoti Kar@
// From PUST