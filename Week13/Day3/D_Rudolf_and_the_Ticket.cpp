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
        int n, m, k, sum = 0;
        in n >> m >> k;
        vtr a(n), b(m);
        for (int i = 0; i < n; i++)
            in a[i];
        for (int i = 0; i < m; i++)
            in b[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i] + b[j] <= k)
                {
                    sum++;
                }
            }
        }
        pr sum nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST