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
    int p = 0;
    while (n > 1)
    {
        int d = 0;
        for (int i = 2; i <= n; i++)
        {
            int c = 0;
            if (n % i == 0)
            {
                for (int j = 2; j <= i / 2; j++)
                {
                    if (i % j == 0)
                    {
                        c++;
                    }
                }
                if (c == 0)
                {
                    d++;
                }
            }
        }
        if (d == 2)
        {
            p++;
        }
        n--;
    }
    pr p nl;
    return 0;
}

// Arundhoti Kar@
// From PUST