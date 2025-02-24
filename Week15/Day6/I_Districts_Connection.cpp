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
    cin >> t;
    while (t--)
    {
        int n;
        in n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        bool ok = false;
        for (int i = 1; i <= n; i++)
        {
            if (a[1] != a[i])
            {
                ok = true;
                break;
            }
        }

        if (ok)
        {
            int disctrict = -1;
            pr "YES" << '\n';
            for (int i = 2; i <= n; i++)
            {
                if (a[1] != a[i])
                {
                    cout << 1 << " " << i << '\n';
                    disctrict = i;
                }
            }

            for (int i = 2; i <= n; i++)
            {
                if (a[i] == a[1])
                {
                    pr disctrict << " " << i << '\n';
                }
            }
        }
        else
        {
            pr "NO" << '\n';
        }
    }
    return 0;
}

// Arundhoti Kar@
// From PUST